#include <stdio.h>

int findSmallestMissingPositive(int arr[], int size) {
    int expectedValue = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0 || (i > 0 && arr[i] == arr[i - 1])) {
            continue;
        }
        if (arr[i] == expectedValue) {
            expectedValue++;
        } else {
            return expectedValue;
        }
    }
    return expectedValue;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallestMissing = findSmallestMissingPositive(arr,n);
    printf("The smallest missing positive integer is: %d\n", smallestMissing);
    return 0;
}
