#include <iostream>
#include "QuickSort.h"

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partitionFirst(int arr[], int low, int high) {
    int pivot = arr[low];  
    int i = low + 1;  

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[low], arr[i - 1]); 
    return i - 1;
}

void quickSortFirst(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionFirst(arr, low, high);  
        quickSortFirst(arr, low, pi - 1);
        quickSortFirst(arr, pi + 1, high);
    }
}

int partitionLast(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low;  

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);  
    return i;
}

void quickSortLast(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionLast(arr, low, high); 
        quickSortLast(arr, low, pi - 1);
        quickSortLast(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
