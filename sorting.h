#ifndef SORTING_H
#define SORTING_H
using namespace std;

#include <vector>

// Bubble Sort
// Compara e intercambia pares adyacentes repetidamente hasta que la lista está ordenada.
void bubbleSort(vector<int> &arr);

// Selection Sort
// Selecciona el elemento mínimo de la parte no ordenada y lo coloca en la posición correcta.
void selectionSort(vector<int> &arr);

// Insertion Sort
// Construye la lista ordenada un elemento a la vez, insertando cada nuevo elemento en su posición correcta.
void insertionSort(vector<int> &arr);

// Merge Sort
// Divide el arreglo en mitades, ordena cada mitad recursivamente y luego fusiona las dos mitades en un solo arreglo ordenado.
void merge(vector<int>& vec, int left, int mid, int right);
void mergeSort(vector<int> &arr, int left, int right);

// Quick Sort
// Divide el arreglo en torno a un pivote y ordena recursivamente las dos particiones hasta que toda la lista queda ordenada.
void quickSort(vector<int> &arr, int low, int high);

#endif // SORTING_H
