#include "vectorFunctions.h"

//PRE: sends in a one dimensional vector
//POST: if vector is not empty, print vector
void printVector(vector<int> v1) {
    if (v1.size() == 0)
        return;

    cout << "\t";
    for (int i = 0; i < v1.size(); ++i)  
        cout << v1.at(i) << " ";

    cout << endl;
}

//PRE: sends in current vector & count of new values
//POST: prompts user to add count elements to the vector
void addValues(vector<int> v1, int count) {
    int value;
    cout << "   Enter " << count << " values: ";
    for (int i = 0; i < count; i++) {
        cin >> value;
        v1.push_back(value);
    }
}

//NOTE: this function is not in vectorFunctions.h
//used only by functions following this definition
void bubbleSort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void vectorExample1() {
    cout << "\nVECTOR - EXAMPLE 1\n";
    int numb, val, smallest = 0;
    vector<int> listNumb = {16, 15, 71, 8, -9, 100};

    cout << "   Enter the number of additional values for vector: ";
    cin >> numb;
    addValues(listNumb, numb);

    //add a function to find smallest element
    cout << "   The smallest value is: " << smallest << endl;

    bubbleSort(listNumb);
    printVector(listNumb);
}

void readVector(string str1, vector<vector<int>> v1){

    int row, col, tempValue;
    vector<int> currRow;       //this vector represents a row in the 2-D vector
    stringstream ss(str1);     //take the input line & create a string stream
    v1.clear();                //clear vector passed in of previous values
    
    //first 2 values are row & col
    ss >> row >> col;
    //read each row
    for (int i = 0; i < row; ++i) {
        //for each row - clear currRow
        currRow.clear();

        //read numbers into the currRow
        for (int j = 0; j < col; ++j) {
            ss >> tempValue;
            currRow.push_back(tempValue);
        }
        //add currRow to v1
        v1.push_back(currRow);
    }
}


//This is an example of FUNCTION OVERLOADING
//PRE: sends in a two dimensional vector
//POST: if vector is not empty, print vector 
void printVector(vector<vector<int>> v1) {
    if (v1.size() == 0)
        return;

    cout << "   Printing vector: " << v1.size() << ":" << v1.at(0).size() << endl;

    for (int i = 0; i < v1.size(); ++i) {
        cout << "\t";
        for (int j = 0; j < v1.at(i).size(); ++j)
            cout << v1.at(i).at(j) << " ";
        cout << endl;
    }
    cout << endl;
}

//PRE:  2 2-D vectors are sent 
//POST: if the vectors are the same size, add the values & print result 
void addVectors(vector<vector<int>> v1, vector<vector<int>> v2) {
 //write logic to add v1 & v2 and print result 
    cout << "   Adding two matrices together:\n";
    printVector(v1);
    printVector(v2);

}

void vectorExample2() {
    cout << "\nVECTOR - EXAMPLE 2\n";
    
    ifstream inFile;
    inFile.open("data.txt");
    if (!inFile.good()) {
        cout << "  Unable to open file\n";
        return;
    }
    
    vector<vector<int>> tempV;
    string str1;
    while (getline(inFile, str1)) {
        //add logic to read another 2-D matrix

        readVector(str1, tempV);

        //add call to addVectors to add matrices together & print all 3 matrices
        printVector(tempV);

    }

    
    inFile.close();
}