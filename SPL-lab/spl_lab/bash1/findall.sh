#!/bin/bash
echo -n "Enter an extension which you want to search for (except .): "
read extn
echo "Okay, finding all the files in your current directory with the extension $extn"
ls -R|grep "\.$extn$"