#include <stdio.h>
#include <string.h>
int main(){
    char str[60];
    int l,i;
    printf("Enter string : ");
    scanf("%s",str);
    
    l=strlen(str);
    
    for (i=l-1; i>=0; i--){
        printf("%c",str[i]);
    }
    return 0;
}
