#include <stdio.h>

void linearSearch();

int main() {
    linearSearch();

    return 0;
}

// for loop and array size
void linearSearch() {
    int nums[] = {0, 1, 2, 3, 4, 5, 6};

    int size = sizeof nums;
    printf("Size: %i\n", size);   // output = 4 * 7 = 28

    int length = size / sizeof nums[0];
    printf("Length: %i\n", length); // output = 7

    for (int i = 0; i < length; i++) {
        if (nums[i] == 4)
            printf("Found 4!\n");
    }

    for (int i = 0; i < length; i++) {
        if (nums[i] == 7)
            printf("Found 7!");
    }
}

