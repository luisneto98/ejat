#!/bin/bash

g++ $1.cpp -o $1
./$1 < $1.in > $1.out
cat $1.out
