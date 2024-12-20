#include <stdio.h>
#include <stdlib.h>

int merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k;
    int comparisons =0;
    int n1 = mid - lb + 1;
    int n2 = ub - mid;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[lb + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;

    k = lb;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
        comparisons++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    return comparisons;
}

int merge_sort(int arr[],int lb ,int ub){
    int comparisons=0;
    if (lb<ub){
        int mid=(lb+ub)/2;
        comparisons+=merge_sort(arr,lb,mid);
        comparisons+=merge_sort(arr,mid+1,ub);
        comparisons+=merge(arr,lb,mid,ub);
    }
    return comparisons;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int comparisons=merge_sort(arr,0,n-1);
    printf("Sorted array : ");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    printf(" ");
    }
    printf("\nNo of comparisons = %d",comparisons);
    return 0;
}
