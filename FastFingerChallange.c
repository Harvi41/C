#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, timeLimit = 5;
    time_t start, end;

    srand(time(0));
    number = rand() % 900 + 100; // Random 3-digit number

    printf("⌨️ Fast Finger Challenge!\n");
    printf("You have %d seconds to type this number: %d\n", timeLimit, number);
    printf("Ready? Press Enter to start...");
    getchar();

    time(&start);
    printf("Type the number: ");
    scanf("%d", &guess);
    time(&end);

    double elapsed = difftime(end, start);

    if (elapsed > timeLimit) {
        printf("⏱️ Too slow! You took %.2f seconds.\n", elapsed);
    } else if (guess == number) {
        printf("✅ Correct and fast! You took %.2f seconds.\n", elapsed);
    } else {
        printf("❌ Wrong number! You typed %d in %.2f seconds.\n", guess, elapsed);
    }

    return 0;
}
