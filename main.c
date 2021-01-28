#include <stdio.h>
#include <string.h>

// these are abstraction, "main" needs to know that these functions exist
void linearSearch();
void printIntegers();
void printStrings();

int main() {
    printStrings();
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

void printStrings() {
    // 1st way to declare string
    char string[] = "Hello";    // \0 is invisible, but it is there

    printf("%c\n", string[0]);  // expect 'H'
    printf("%s\n", string); // expect 'Hello'

    // strlen() returns unsigned long, %lu formatter for unsigned long
    printf("%lu\n", strlen(string));     // return 5
    printf("%p\n", &string[5]);


    // 2nd way to declare string
    char string2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%lu\n", strlen(string2));    // also return 5, interesting

    printf("%p\n", &string2[0]);
    printf("%p\n", &string2[1]);
    printf("%p\n", &string2[2]);
    printf("%p\n", &string2[3]);
    printf("%p\n", &string2[4]);
    printf("%p\n", &string2[5]); // returns address of last null character in the string
    printf("%p\n", &string2);   // returns the first character's address

    // another way to declare strings
    // print string via pointer arithmetic
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}

