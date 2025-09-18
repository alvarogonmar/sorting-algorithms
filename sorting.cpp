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