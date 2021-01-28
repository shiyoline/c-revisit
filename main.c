#include <stdio.h>

// these are abstraction, "main" needs to know that these functions exist
void linearSearch();
void printIntegers();

int main() {
    printIntegers();
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

// print integers and addresses
void printIntegers() {
    int n = 50;
    int *p = &n;    // store integer n's address

    // print integer
    printf("%i\n", n);

    // print an integer's address
    // %p is format code for an address
    printf("%p\n", &n);

    // print an integer via its address
    // * is a dereference pointer, we "go to" the address of n
    printf("%i\n", *&n);

    // print address of n
    // p holds address of n
    printf("%p\n", p);

    // print an integer via its address
    printf("%i\n", *p);
}



