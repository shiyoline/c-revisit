// This program calculates the growth of a population.
#include <stdio.h>

int main(void)
{
    int startSize;
    int endSize;
    int numYear = 0;

    // TODO: Prompt for start size
    do {
        printf("Initial size: ");
        scanf("%i", &startSize);
    } while (startSize < 9);


    // TODO: Prompt for end size
    do {
        printf("End size: ");
        scanf("%i", &endSize);
    } while (endSize < 9);

    // TODO: Calculate number of years until we reach threshold
    // 1 year = 1 iteration
    while (startSize < endSize) {
        int newBorn = startSize / 3;
        int dead = startSize / 4;

        startSize += (newBorn - dead);
        numYear++;
    }

    // TODO: Print number of years
    printf("Number of years: %i", numYear);

    return 0;
}