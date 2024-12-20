#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *word) {
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
}

void countWordOccurrences(char text[]) {
    const int MAX_WORDS = 1000;
    char words[MAX_WORDS][100];
    int counts[MAX_WORDS];
    int numWords = 0;

    char *token = strtok(text, " ,.!?;:\n");
    while (token != NULL) {
        toLowerCase(token);

        int foundIndex = -1;
        for (int i = 0; i < numWords; i++) {
            if (strcmp(words[i], token) == 0) {
                foundIndex = i;
                break;
            }
        }
        if (foundIndex == -1) {
            if (numWords < MAX_WORDS) {
                strcpy(words[numWords], token);
                foundIndex = numWords;
                numWords++;
            } else {
                printf("Maximum number of words exceeded. Some words may not be counted.\n");
                continue;
            }
        }
        counts[foundIndex]++;
        token = strtok(NULL, " ,.!?;:\n");
    }

    printf("Word Occurrences:\n");
    for (int i = 0; i < numWords; i++) {
        printf("%s: %d\n", words[i], counts[i]);
    }
}

int main() {
    char str[1000];
    printf("Enter the text (up to 1000 characters):\n");
    fgets(str, 1000, stdin);
    countWordOccurrences(str);
    return 0;
}
