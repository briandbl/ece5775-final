#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/student/svr24/ece5775/final_proj/combined/float/voicerec.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
