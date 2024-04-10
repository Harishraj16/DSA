#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20];
    scanf("%s", str);

    int counts[3] = {0}; // Initialize an array to store counts for 'a', 'b', and 'c'

    // Count occurrences of 'a', 'b', and 'c' in the input string
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a') counts[0]++;
        else if (str[i] == 'b') counts[1]++;
        else if (str[i] == 'c') counts[2]++;
    }

    // Find the maximum count among 'a', 'b', and 'c'
    int maxi = counts[0];
    for (int i = 1; i < 3; i++) {
        if (counts[i] > maxi) maxi = counts[i];
    }

    // Calculate the number of deletions needed for each character
    int deletions = 0;
    for (int i = 0; i < 3; i++) {
        deletions += (maxi - counts[i]);
    }

    printf("%d\n", deletions);

    return 0;
}
