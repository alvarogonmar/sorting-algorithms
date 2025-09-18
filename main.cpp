#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "sorting.h"

using namespace std;

int main()
{
    srand(time(nullptr));
    int n = 10 + rand() % 6; // random size between 10 and 15
    vector<int> arr(n);
    for (int &num : arr)
    {
        num = rand() % 100; // random numbers between 0 and 99
    }

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(arr);

    cout << "Bubble Sort Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "Selection Sort Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(arr);

    cout << "Insertion Sort Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;


    mergeSort(arr, 0, arr.size() - 1);

    cout << "Merge Sort Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "Quick Sort Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
