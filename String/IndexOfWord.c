#include <stdio.h>
#include <string.h>
int binarySearchWords(char (*words)[200], int size, char* target)
{
 int high, low, mid;
 high = size - 1;
 low = 0;

 while (low <= high)
 {
 mid = (low + high) / 2;
 int comparison = strcmp(words[mid], target);
 if (comparison == 0)
 {
 return mid;
 }
 else if (comparison < 0)
 {
 low = mid + 1;
 }
 else
 {
 high = mid - 1;
 }
 }
 return -1;
}
int main()
{
 int n;
 printf("Enter size: ");
 scanf("%d", &n);
 char words[200][200];

 while (getchar() != '\n');
 printf("Enter words in lexicographic order:\n");
 for (int i = 0; i < n; i++)
 {
 scanf("%199s", words[i]);
 }
 char miss[200];
 printf("Enter word: ");
 scanf("%199s", miss);
 int result = binarySearchWords(words, n, miss);
 printf("%s is found at index: %d\n", miss, result);
 return 0;
}
