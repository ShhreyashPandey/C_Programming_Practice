#include <stdio.h>
#include <math.h>
int main()
{
    printf("**MAIN MENU**");
    printf("\n1 : Addition");
    printf("\n2 : Subtraction");
    printf("\n3 : Multiplication");
    printf("\n4 : Division");
    printf("\n5 : Logarithm function");
    printf("\n6 : Trigonometric function");
    
    int x;
    float a,b,result;
    double radian;
    
    printf("\nEnter your choice : ");
    scanf("%d",&x);
    
    if (x==1 || x==2 || x==3 || x==4){
        printf("Enter first number : ");
        scanf("%f",&a);
        printf("Enter second number : ");
        scanf("%f",&b);
        
        if (x==1){
            result = a + b; 
            printf ("%0.2f + %0.2f = %0.2f",a,b,result);
        }
        else if (x==2){
            result = a - b; 
            printf ("%0.2f - %0.2f = %0.2f",a,b,result);
        }
        else if (x==3){
            result = a * b; 
            printf ("%0.2f * %0.2f = %0.2f",a,b,result);
        }
        else if (x==4){
            result = a / b; 
            printf ("%0.2f / %0.2f = %0.2f",a,b,result);
        }
    }
    else if(x==5 || x==6 ){
        printf("Enter a number : ");
        scanf("%f",&a);
        if (x==5){
            result = log(a); 
            printf ("log(%0.2f)= %0.2f",a,result);
        }
        if (x==6){
             
             double radian = a * (M_PI / 180);
             printf("sin value is %lf \n", sin(radian));
             printf("cos value is %lf \n", cos(radian));
             printf("tan value is %lf \n", tan(radian));
        }
    }
    else{
        printf("*Wrong choice*");
    }
    return 0;
}
