#pragma once

#include "arrayFunctions.h"
#include <vector>
#include <fstream>   //used to read input & output files
#include <sstream>   //used to change a string to string-stream
using namespace std;

//PRE: sends in a one dimensional vector
//POST: if vector is not empty, print vector
void printVector(vector<int> v1);

//PRE: sends in a two dimensional vector
//POST: if vector is not empty, print vector
void printVector(vector<vector<int>> v1);

//PRE: sends in current vector & count of new values
//POST: prompts user to add count elements to the vector
void addValues(vector<int> v1, int count);

//PRE: none
//POST: demonstrates 1 dimensional vectors
//      setting initial values, 
//      reading from CIN, 
//      sorting & printing
void vectorExample1();   

//PRE: str1 contains the current input record of vector information
//     row col values.....
//POST: get the value of row, col & values & load a 2-D vector from this information
void readVector(string str1, vector<vector<int>> v1);

//PRE:  2 2-D vectors are sent 
//POST: if the vectors are the same size, add the values & print result 
void addVectors(vector<vector<int>> v1, vector<vector<int>> v2);

void vectorExample2();  //reads an input record & loads a vector