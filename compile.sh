#!/bin/bash
LPURPLE='\033[1;35m'
NC='\033[0m'
printf "${LPURPLE}Start compiling.${NC}\n"
g++ -v -ftime-report -o calc calc.cpp -std=c++11
