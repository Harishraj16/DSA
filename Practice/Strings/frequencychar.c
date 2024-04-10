#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a structure to hold character frequency information
struct CharFrequency {
    char character;
    int frequency;
};

// Compare function for sorting CharFrequency structs based on frequency
int compare(const void *a, const void *b) {
    struct CharFrequency *charFreqA = (struct CharFrequency *)a;
    struct CharFrequency *charFreqB = (struct CharFrequency *)b;

    // Sort in descending order based on frequency
    return charFreqB->frequency - charFreqA->frequency;
}

char *frequencySort(char *s) {
    // Initialize an array to count the frequency of each character (ASCII range)
    int charCount[128] = {0};

    // Count the frequency of each character
    for (int i = 0; s[i] != '\0'; i++) {
        charCount[(int)s[i]]++;
    }

    // Create an array of CharFrequency structs to hold character frequency information
    struct CharFrequency charFreqArr[128];
    int charFreqArrSize = 0; // Size of the charFreqArr

    // Populate the charFreqArr with character frequency information
    for (int i = 0; i < 128; i++) {
        if (charCount[i] > 0) {
            charFreqArr[charFreqArrSize].character = (char)i;
            charFreqArr[charFreqArrSize].frequency = charCount[i];
            charFreqArrSize++;
        }
    }

    // Sort the charFreqArr in descending order based on frequency
    qsort(charFreqArr, charFreqArrSize, sizeof(struct CharFrequency), compare);

    // Construct the sorted string based on the sorted charFreqArr
    char *sortedString = (char *)malloc((strlen(s) + 1) * sizeof(char));
    int index = 0;
    for (int i = 0; i < charFreqArrSize; i++) {
        for (int j = 0; j < charFreqArr[i].frequency; j++) {
            sortedString[index++] = charFreqArr[i].character;
        }
    }
    sortedString[index] = '\0'; // Null-terminate the string

    return sortedString;
}

int main() {
    char s1[] = "tree";
    char s2[] = "cccaaa";
    char s3[] = "Aabb";

    printf("Test Case 1: Input: %s, Output: %s\n", s1, frequencySort(s1));
    printf("Test Case 2: Input: %s, Output: %s\n", s2, frequencySort(s2));
    printf("Test Case 3: Input: %s, Output: %s\n", s3, frequencySort(s3));

    return 0;
}
