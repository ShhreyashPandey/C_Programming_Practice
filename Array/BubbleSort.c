#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int arr[], int size){
    for (int i=0; i<=size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main()
{
 int n;
 printf("Enter array size:");
 scanf("%d", &n);
 int a[n];
 for(int i=0;i<n;i++)
 {
     printf("Enter element %d:",i+1);
     scanf("%d", &a[i]);
 }
 bubble_sort(a,n);
 printf("Sorted array");
 for (int i=0;i<n;i++){
     printf("%d",a[i]);
     printf("\n");
 }
 return 0;
}
