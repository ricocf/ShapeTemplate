#!/bin/bash

[ -e $PWD/src/main.cpp  ]

if ! command -v g++ &> /dev/null; then
	    echo "Error: g++ is not installed."
	        exit 1
fi


g++ $PWD/src/main.cpp -o ShapeTemplate

./ShapeTemplate
