#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "sorting.h"

using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int i = arr.size() - 1; i > 0; --i)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (temp < arr[j] && j > -1)
        {
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

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
    return 0;
}