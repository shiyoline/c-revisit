#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// these are abstraction, "main" needs to know that these functions exist
void linearSearch();
void printIntegers();
void printStrings();
void printArray();
void compareStrings();
void compareStringAddresses();
void capitalizeStrings();
void capitalizeWholeString();
void capitalizeStringWithStrcpy();
void capitalizeStringWithNoMemoryError();
void testValgrind();
void garbageValues();

int main() {
    garbageValues();
    return 0;
}

void garbageValues() {
    // when you don't assign values, scores holds garbage values
    int scores[3];
    for (int i = 0; i < 3; i++) {
        printf("%i\n", scores[i]);
    }

    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;
    printf("%i\n", *x);
    printf("%i\n", *y); // this prints garbage values

    y = x;
    *y = 13;
    printf("%i\n", *x);
    printf("%i\n", *y);

}

// this causes memory leaks
// make sure to allocate enough memory
void testValgrind() {
    char *s = malloc(4);
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '!';
    s[3] = '\0';
    printf("%s\n", s);

    free(s);
}



void capitalizeStringWithNoMemoryError() {
    char string[] = "hello";

    char *string2 = malloc(strlen(string) + 1);

    if (string2 == NULL)    // case where computer runs out of memory
        return;

    // copy strings
    strcpy(string2, string);

    // capitalize copy
    for (int i = 0, n = strlen(string); i <= n; i++) {
        string2[i] = toupper(string2[i]);
    }

    printf("String: %s\n", string);
    printf("String2: %s\n", string2);


    free(string2);  // mark it usable for other programs, though value is still here


    printf("String2: %s\n", string2);

}


void capitalizeStringWithStrcpy() {
    char string[] = "hello";

    char *string2 = malloc(strlen(string) + 1);

    // copy strings
    strcpy(string2, string);

    // capitalize copy
    for (int i = 0, n = strlen(string); i <= n; i++) {
        string2[i] = toupper(string2[i]);
    }

    printf("String: %s\n", string);
    printf("String2: %s\n", string2);
}


void capitalizeWholeString() {
    char string[] = "hello";

    char *string2 = malloc(strlen(string) + 1);

    for (int i = 0, n = strlen(string); i <= n; i++) {
        string2[i] = string[i];
    }

    // capitalize copy
    for (int i = 0, n = strlen(string); i <= n; i++) {
        string2[i] = toupper(string2[i]);
    }

    printf("String: %s\n", string);
    printf("String2: %s\n", string2);
}

// Capitalize a string
void capitalizeStrings() {
    char string[] = "hello";

    char *string2 = string;

    char c = 'c';

    string2[0] = toupper(string2[0]);

    printf("c: %c\n", c);
    printf("String: %s\n", string);
    printf("String2: %s\n", string2);
}

// compare two strings addresses
void compareStringAddresses() {
    char *string = "Hello";
    char *string2 = "Hello2";

    if (string == string2) {
        printf("Equal\n");
    } else {
        printf("Different\n");
    }

    printf("String: %p\n", string);
    printf("String2: %p\n", string2);
}


// compare two strings contents
void compareStrings() {
    char *string = "Hello";
    char *string2 = "Hello2";

    if (strcmp(string, string2)) {
        printf("Equal\n");
    } else {
        printf("Different\n");
    }
}

// print arrays using pointer arithmetic
void printArray() {
    int nums[] = {4, 6, 8, 2, 7, 5, 0}; // length = 6

    // print numbers
    printf("%i\n", *nums);  // returns 4
    printf("%i\n", *(nums + 1));  // returns 6

    // same as above
    printf("%i\n", nums[0]);
    printf("%i\n", nums[1]);
}

// print strings using different techniques
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






