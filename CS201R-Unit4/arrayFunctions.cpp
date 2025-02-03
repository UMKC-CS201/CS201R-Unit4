// FUNCTION DEFINITIONS
// ARRAYS
#include "arrayFunctions.h"

void getArray(int a[], const int size) {
    cout << "  Enter " << size << " integer values: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}
void printArray(int a[], const int size) {
    cout << "\n  Your array is:   ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl << endl;
}

double average(int a[], const int size) {
    double total = 0;
    double avg;
    for (int i = 0; i < size; i++)
        total += a[i];

    avg = (total / size);
    return avg;
}

void arrayExample1() {
    // ARRAYS: EXAMPLE 1
    cout << "ARRAY - EXAMPLE 1\n";
    const int ARRSIZE1 = 7;
    int dataSalesA[7];
    getArray(dataSalesA, ARRSIZE1);
    printArray(dataSalesA, ARRSIZE1);

    int dataSalesB[ARRSIZE1] = { 0, 500, 200, 300, 800, 1000, 0 };
    dataSalesB[0] = 50;
    dataSalesB[1] = 100;
    printArray(dataSalesB, ARRSIZE1);
}

void arrayExample2() {
    // ARRAYS: EXAMPLE 2
    cout << "\nARRAY - EXAMPLE 2\n";
    const int ARRSIZE2 = 3;
    double speeds[ARRSIZE2];

    cout << "  Enter the 3 speed values:  "  ;
    cin >> speeds[0] >> speeds[1] >> speeds[2];

    cout << endl << "  The values are: ";
    cout << speeds[0] << "  " << speeds[1] << "  ";
    cout << speeds[2] << "  " << speeds[3] << endl;
}

void arrayExample3() {
    cout << "\nARRAY - EXAMPLE 3\n";
    const int ARRSIZE3 = 3;
    int age[ARRSIZE3];

    getArray(age, ARRSIZE3);
    printArray(age, ARRSIZE3);
    double avg = average(age, ARRSIZE3);
    cout << "  The average is: " << avg << endl;
}

void arrayExample4() {
    cout << "\nARRAY - EXAMPLE 4\n";
    cout << "  This is My Multiplication Chart" << endl;

    int a[10][10];
    cout << "  Loading 2-Dimensional Array:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            a[i][j] = (i + 1) * (j + 1);
    }
    cout << "  Printing 2-Dimensional Array: \n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cout << setw(4) << a[i][j] << " ";
        cout << endl;
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        // Optional: Print the array after each pass
        //printArray(arr, size);
    }
}
void arrayExample5() {
    cout << "\nARRAY - EXAMPLE 5\n";
    int const size = 6;
    int arr[size] = { 15,7,3,4,9,5 };

    cout << "\n\n  BUBBLE SORT" << endl;
    cout << "  ORIGINAL";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "  AFTER";
    printArray(arr, size);
}