#include <stdio.h>
void insertion_sort(int array[],int size){
    for (int i=1;i<size;i++){
    int temp=array[i];
    int j=i-1;
    while (j>=0 && array[j]>temp){
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=temp;
    }
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
    insertion_sort(arr,n);
    printf("Sorted array : ");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    printf("\n");
    }
    
    return 0;
}
