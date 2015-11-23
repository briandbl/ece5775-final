#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <string>

#define learningRate 0.02
#define momentum     0.8
#define maxEpoch     150
#define INPUTSIZE    784
#define HIDDENSIZE    784
#define OUTPUTSIZE    10

typedef struct _NeuralNetwork {
  // neuron values
  float input[INPUTSIZE+1];
  float hidden[HIDDENSIZE+1];
  float output[OUTPUTSIZE];

  // inter-layer weight matrices
  float weightIH[(INPUTSIZE+1) * HIDDENSIZE];
  float weightHO[(HIDDENSIZE+1) * OUTPUTSIZE];
  
  // changes to weights for backpropagation
  float deltaIH[(INPUTSIZE+1) * HIDDENSIZE];
  float deltaHO[(HIDDENSIZE+1) * OUTPUTSIZE];

  // error gradients for backpropagation
  float hiddenErrorGradients[HIDDENSIZE];
  float outputErrorGradients[OUTPUTSIZE];

  //accuracy stats per epoch
  float trainingSetAccuracy, testSetAccuracy;
} NeuralNetwork;

// construct the neural network
// Important Note:
//  the '+1' in all the malloc's is to include an extra neuron whose
//  value is set to -1. This works to set a bias value to each connection.
//  the _<____+1 in the for loop conditions could be _<=____ instead
NeuralNetwork* neuralNetwork(int nInput, int nOutput) {
  assert(nInput == INPUTSIZE);
  assert(nOutput == OUTPUTSIZE);

  // set bounding variables for the initial weights
  float rangeIH = 1/sqrt((float)nInput);
  float rangeHO = 1/sqrt((float)HIDDENSIZE); 

  // allocate memory for struct pointer
  NeuralNetwork* nn = (NeuralNetwork*) malloc(sizeof(NeuralNetwork));
  
  // initialize the the IH weights to some constrained random values
  for(int i = 0; i < nInput+1; i++) {   
    nn->input[i] = 0;
    for(int j = 0; j < HIDDENSIZE; j++) {
      nn->weightIH[i*HIDDENSIZE + j] = (((float)(rand()%100)+1)/100  * 2 * rangeIH) - rangeIH;
      nn->deltaIH[i*HIDDENSIZE + j] = 0;      
    }
  }
  nn->input[nInput] = -1;

  // initialize the the HO weights to some constrained random values
  for(int i = 0; i < HIDDENSIZE+1; i++) {   
    nn->hidden[i] = 0;
    if (i != HIDDENSIZE) nn->hiddenErrorGradients[i] = 0;
    for(int j = 0; j < nOutput; j++) {
      nn->weightHO[i*OUTPUTSIZE + j] = (((float)(rand()%100)+1)/100  * 2 * rangeHO) - rangeHO;      
      nn->deltaHO[i*OUTPUTSIZE + j] = 0; 
    }
  }
  nn->hidden[HIDDENSIZE] = -1;

  for (int i=0; i < nOutput; i++) {
    nn->output[i] = 0;
    nn->outputErrorGradients[i] = 0;
  }

  return nn;
}

void loadWeights(NeuralNetwork* neuralNetwork, const char* inputFile) {
  // TODO: Implement a loading function
}
void saveWeights(NeuralNetwork* neuralNetwork, const char* outputFile) {
  // TODO: Implement a saving function
}

void feedForward(NeuralNetwork* nn, float* pattern) {
  std::ofstream outfile;
  outfile.open("feedforward.dat", std::ofstream::app);
  // enter pattern value into input neurons
  for (int j = 0; j < INPUTSIZE; j++){
    //outfile << "input[" << j << "] = " << pattern[j] << "\n";
    nn->input[j] = pattern[j];
  }
  for (int j = 0; j < HIDDENSIZE; j++) {
    nn->hidden[j] = 0;
    // sum the inputs times the weights between them and the hidden neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < INPUTSIZE+1; k++)
      nn->hidden[j] += nn->input[k] * nn->weightIH[k*HIDDENSIZE + j];
    nn->hidden[j] = 1/(1+exp(-1*(nn->hidden[j])));
    //outfile << "hidden[" << j << "] = " << nn->hidden[j] << "\n";
  }

  // enter value generated in the hidden layer to the output neurons
  for (int j = 0; j < OUTPUTSIZE; j++) {
    nn->output[j] = 0;
    // sum the hidden values times the weights between them and the output neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < HIDDENSIZE+1; k++)
      nn->output[j] += nn->hidden[k] * nn->weightHO[k*OUTPUTSIZE + j];
    nn->output[j] = 1/(1+exp(-1*(nn->output[j])));
    //outfile << "output[" << j << "] = " << nn->output[j] << "\n";
  }
  outfile.close();
}

int guessClassification(int nOutput, float* output) {
  float max = 0;
  int guess;
  for (int j = 0; j < nOutput; j++) {
    if (output[j] > max) {
      guess = j;
      max = output[j];
    }
  }
  return guess;
}

// get the classification accuracy of the provided data set
// PRECONDITIONS:
//   * each individual input MUST be composed of nInput values
//   * inputs and labels MUST BOTH have 'size' number of elements
float getTestAccuracy(NeuralNetwork* nn, float* inputs, int* labels, int size) {
  int incorrectPatterns = 0;

  for (int i = 0; i < size; i++) {
    feedForward(nn, &inputs[i*INPUTSIZE]);
    int guess = guessClassification(OUTPUTSIZE, nn->output);
    if (guess != labels[i]) incorrectPatterns++;
  }
  return 1.0 - (float)incorrectPatterns / (float)size;
}

// train the network 
// note: the _<____+1 in the for loop conditions could be _<=____ instead
// PRECONDITIONS:
//   * each individual input MUST be composed of nInput values
//   * inputs and labels MUST BOTH have 'size' number of elements
void trainNetwork( NeuralNetwork* nn, 
                   float* inputs, int* labels, int size,
                   float* testInputs, int* testLabels, int testSize) {
  int epoch = 0;

  std::ofstream outfile;
  outfile.open("feedforward.dat");
  outfile.close();
  outfile.clear();
  outfile.open("out.dat");

  while (epoch < maxEpoch) {
    outfile << "Epoch " << epoch << "\n";
    int incorrectPatterns = 0;

    for (int i = 0; i < size; i++) {

      //***************************************************************************************************************
      // Feedforward training input
      //***************************************************************************************************************

      feedForward(nn, &inputs[i*INPUTSIZE]);

      //***************************************************************************************************************
      // backpropagate errors
      // note: can this be improved with the calculation of error gradients?
      //***************************************************************************************************************

      for (int j = 0; j < OUTPUTSIZE; j++) {
        float target = labels[i] == j;
        outfile << "label: " << labels[i] << "     j: " << j << "\n";
        // set error gradient for the output node
        nn->outputErrorGradients[j] = nn->output[j] * (1-nn->output[j]) * (target - nn->output[j]);
        //outfile << "outputErrorGradients[" << j << "]= " << nn->outputErrorGradients[j] << "\n";
        for (int k = 0; k < HIDDENSIZE+1; k++) {
          nn->deltaHO[k*OUTPUTSIZE + j] = learningRate * nn->hidden[k] * nn->outputErrorGradients[j] + momentum * nn->deltaHO[k*OUTPUTSIZE + j];
          //outfile << "deltaHO[" << k << "][" << j << "= " << nn->deltaHO[k][j] << "\n";
        }
      }

      for (int j = 0; j < HIDDENSIZE; j++) {
        // set error gradient for the output node based on weightsHO times outputErrorGradients
        float sum = 0;
        for (int k = 0; k < OUTPUTSIZE; k++) sum+= nn->weightHO[j*OUTPUTSIZE + k] * nn->outputErrorGradients[k];
        nn->hiddenErrorGradients[j] = nn->hidden[j] * (1-nn->hidden[j]) * sum;
        //outfile << "hiddenErrorGradients[" << j << "]= " << nn->hiddenErrorGradients[j] << "\n";
        for (int k = 0; k < INPUTSIZE+1; k++)
          nn->deltaIH[k*HIDDENSIZE + j] = learningRate * nn->input[k] * nn->hiddenErrorGradients[j] + momentum * nn->deltaIH[k*HIDDENSIZE + j];
      }

      //***************************************************************************************************************
      // update weights
      //***************************************************************************************************************      
      for (int j = 0; j < INPUTSIZE+1; j++) {
        for (int k = 0; k < HIDDENSIZE; k++) {
          nn->weightIH[j*HIDDENSIZE + k] += nn->deltaIH[j*HIDDENSIZE + k];
        }
      }
      for (int j = 0; j < HIDDENSIZE+1; j++) {
        for (int k = 0; k < OUTPUTSIZE; k++) {
          nn->weightHO[j*OUTPUTSIZE + k] += nn->deltaHO[j*OUTPUTSIZE + k];
        }
      }

      //***************************************************************************************************************
      // check if pattern was correctly identified
      //*************************************************************************************************************** 
      int guess = guessClassification(OUTPUTSIZE, nn->output);
      if (guess != labels[i]) incorrectPatterns++;

      // if (i % (size/10) == 0) {
      //   nn->trainingSetAccuracy = 1.0 - (float)incorrectPatterns / (float)size * 10.0;

      //   nn->testSetAccuracy = getTestAccuracy(nn, testInputs, testLabels, testSize);

      //   std::cout << "Epoch :" << epoch << "\n";
      //   std::cout << " Training Set Acc:" << nn->trainingSetAccuracy << "\n";
      //   std::cout << " Test Set Acc:" << nn->testSetAccuracy << "\n";
      //   incorrectPatterns = 0;
      // }
    }

    nn->trainingSetAccuracy = 1.0 - (float)incorrectPatterns / (float)size;

    nn->testSetAccuracy = getTestAccuracy(nn, testInputs, testLabels, testSize);

    std::cout << "Epoch :" << epoch << "\n";
    std::cout << " Training Set Acc:" << nn->trainingSetAccuracy << "\n";
    std::cout << " Test Set Acc:" << nn->testSetAccuracy << "\n";
    
    epoch++;
  }
  outfile.close();
}



























