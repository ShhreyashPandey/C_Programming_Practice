#include <stdio.h>
#include <string.h>
int main(){
    char str[60];
    int l,i,flag=0;
    printf("Enter string : ");
    scanf("%s",str);
    
    l=strlen(str);
    
    for (i=0; i<=l; i++){
        if (str[i] != str[l-i-1]) {
            flag=1;
            break;
        }
    }
    if (flag==1){
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }
    return 0;
}
