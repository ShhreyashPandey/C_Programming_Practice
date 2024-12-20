#include <stdio.h>
#include <math.h> 
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n],min,max,i;
    for (i=0;i<n;i++){
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for (i=0;i<n;i++){
        if (min>a[i]){
            min=a[i];
        }
        if (max<a[i]){
            max=a[i];
        }
    }
    printf("The minimum element is : %d",min);
    printf("\nThe maximum element is : %d",max);
    
    //to find variance and standard deviation
    float mean,var,sd,sum;
    for(i = 0;i < n; i++){
          sum = a[i] + sum;
     }
     mean = sum/n;
     printf("\n\nSum : %0.2f", sum);
     printf("\nMean : %0.2f", mean);
     for(i=0;i<n;i++)
     {
          var = var + ((a[i] - mean) * (a[i]- mean)) / (n-1);
     }
     printf("\nVariance : %0.2f", var);
     sd = sqrt(var);
     printf("\nStandard Deviation : %0.2f", sd);
    return 0;
}
