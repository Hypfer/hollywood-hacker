#!/bin/sh
clear
while true; do sh -c "$(shuf -n 1 ./commands)" | ./hollywood ; sleep 0.5; done
