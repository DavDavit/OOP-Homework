#include <iostream>
#include "QuickSort.h"

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original (Initial) array: ";
    printArray(arr, n);

    quickSortFirst(arr, 0, n - 1);
    std::cout << "Sorted array (pivot first used): ";
    printArray(arr, n);

    int arr2[] = {10, 7, 8, 9, 1, 5};

    quickSortLast(arr2, 0, n - 1);
    std::cout << "Sorted array (pivot last used): ";
    printArray(arr2, n);

    return 0;
}
