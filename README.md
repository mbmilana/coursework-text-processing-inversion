# Демо курсовой

## Text invertor
Programm for inverting the order of words in lines of text

## Description
The program reads the text line by line and reverses the word order

## Compile and run main program
`g++ main.cpp program.cpp -o main`
`./main`

## Compile and run tests
`g++ tests.cpp program.cpp -o tests`
`./tests`

## Example
`Maksimka lubit mandarinki`
`mandarinki lubit Maksimka`

## Testing
The programm includes unit tests that verify:
- single word inversion
- multiple line inversion
- extra spaces handling

## Project structure
├── main.cpp
├── program.cpp
├── program.h
├── test_runner.h
├── tests.cpp
└── in.txt