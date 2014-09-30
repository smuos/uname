#!/bin/bash

gcc -Wall $1 -o testUname.exe



diff --brief <(./testUname.exe) UnameOutput.log >/dev/null
comp_value=$?  #Look at diff exit status

if [ $comp_value -eq 1 ]
then
    echo "WARNING: Output is different!"
else
    echo "SUCCESS: Output is the same!"
fi
