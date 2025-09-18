#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "sorting.h"

using namespace std;

// Algoritmo Bubble Sort
// Recorre el arreglo varias veces, comparando e intercambiando elementos adyacentes si están en el orden incorrecto.
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

// Algoritmo Selection Sort
// Busca el elemento mínimo en la parte no ordenada y lo coloca en la posición correspondiente al inicio del arreglo.
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

// Algoritmo Insertion Sort
// Inserta cada elemento en la posición correcta dentro de la parte ya ordenada del arreglo.
void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        // Desplaza los elementos mayores que temp hacia la derecha
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

// Algoritmo Merge Sort
void merge(vector<int>& vec, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Guarda todos los elementos de la izquierda en L y de la derecha en R
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = vec[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = vec[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    // Va acomodando de menor elemento a mayor
    while (i < n1 && j < n2) {
        if (L[i] < R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    // Divide los elementos entre dos
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    
    merge(arr, left, mid, right);
}

// Algoritmo Quick Sort
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        // Reorganizar los elementos según el pivote.
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
         // Colocar el pivote en su posición final.
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

         // Llamadas recursivas
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}