#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int array[],int size){
    for (int i=0;i<size;i++){
        int min=i;
        for (int j=i+1;j<size;j++){
            if (array[j]<array[min]){
                min=j;
            }
        }
        if (min!=i){
            swap(&array[min],&array[i]);
        }
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
    selection_sort(arr,n);
    printf("Sorted array : ");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    printf("\n");
    }
    
    return 0;
}
