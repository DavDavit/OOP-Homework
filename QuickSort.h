#ifndef QUICKSORT_H
#define QUICKSORT_H

void swap(int& a, int& b);

int partitionFirst(int arr[], int low, int high);
void quickSortFirst(int arr[], int low, int high);

int partitionLast(int arr[], int low, int high);
void quickSortLast(int arr[], int low, int high);

void printArray(int arr[], int size);

#endif 