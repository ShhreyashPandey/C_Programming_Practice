#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i - 1;
        int current = arr[i];
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}
 
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int minValue = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (minValue > arr[j]) {
                minValue = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = minValue;
        arr[minIndex] = temp;
    }
}
 
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
 
int main() {
    int array[10000];
    for (int i = 0; i < 10000; i++) {
        array[i] = rand() % 10000;
    }
 
    clock_t start, end;
    double timeInsertion, timeSelection, timeBubble;
    start = clock();
    insertionSort(array, 10000);
    end = clock();
    timeInsertion = ((double)(end - start)) / CLOCKS_PER_SEC;
    start = clock();
    selectionSort(array, 10000);
    end = clock();
    timeSelection = ((double)(end - start)) / CLOCKS_PER_SEC;
 
    start = clock();
    bubbleSort(array, 10000);
    end = clock();
    timeBubble = ((double)(end - start)) / CLOCKS_PER_SEC;
 
    printf("\nThe time for insertion sort is: %f", timeInsertion);
    printf("\nThe time for selection sort is: %f", timeSelection);
    printf("\nThe time for bubble sort is: %f", timeBubble);
 
    return 0;
}
