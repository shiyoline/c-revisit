#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

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
void swapIntegers(int *a, int *b);
void incorrectlyGetsString();
void openFile();
void resizingArray();
void dynamicArray();
void linkedList();

typedef struct node {
    int number;
    struct node *next;
} node;

typedef struct treeNode {
    int number;
    struct treeNode *left;
    struct treeNode *right;
} treeNode;

int main() {
    linkedList();

    return 0;
}

// tree is a pointer to a node that is the root of the tree we're searching in.
// number is the value we're trying to find in the tree.
bool search(treeNode *tree, int number)
{
    // First, we make sure that the tree isn't NULL, if we've reached a node
    // on the bottom, or if our tree is entirely empty
    if (tree == NULL)
    {
        return false;
    }
        // If we're looking for a number that's less than the tree's number,
        // search the left side, using the node on the left as the new root
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
        // Otherwise, search the right side, using the node on the right as the new root
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
        // Finally, we've found the number we're looking for, so we can return true.
        // We can simplify this to just "else", since there's no other case possible
    else if (number == tree->number)
    {
        return true;
    }
}

void linkedList() {
    node *list = NULL;  // list of size 0

    // add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL) return;

    n->number = 1;
    n->next = NULL;
    list = n;

    // add number to list
    n = malloc(sizeof(node));
    if (n == NULL) {
        free(list);
        return;
    }

    n->number = 2;
    n->next = NULL;
    list->next = n;

    // add number to list
    n = malloc(sizeof(node));
    if (n == NULL) {
        free(list->next);
        free(list);
        return;
    }

    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // print list
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%i\n", tmp->number);
    }

    // free list
    while (list != NULL) {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}

void dynamicArray() {
    // list of size 3
    int *list = malloc(3 * sizeof(int));

    printf("Memory: %p\n", &list);
    printf("Memory 0: %p\n", &list[0]);
    printf("Memory 1: %p\n", &list[1]);

    // case where computer runs out of memory
    if (list == NULL) return;

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    list = realloc(list, 4 * sizeof (int));

    if (list == NULL) return;

    list[3] = 4;

    printf("Memory: %p\n", &list);
    printf("Memory 0: %p\n", &list[0]);
    printf("4: %i\n", list[3]);

    free(list);
}

void resizingArray() {
    // list of size 3
    int *list = malloc(3 * sizeof(int));

    // computer out of memory
    if (list == NULL) return;

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // allocate 4 integers
    int *temp = malloc(4 * sizeof(int));

    // transfer values
    for (int i = 0; i < 3; i++) {
        temp[i] = list[i];
    }
    temp[3] = 4;


    free(list);

    list = temp;

    for (int i = 0; i < 4; i++) {
        printf("%i\n", list[i]);
    }

    free(list);
}

// interesting
// this creates a file if the file doesn't eixst
void openFile() {
    // mode: a = append, r = read, w = write
    FILE *file = fopen("test.txt", "a");
    if (file == NULL)
        return;


    fprintf(file, "Print success");

    fclose(file);
}

// this will crash, make sure to allocate memory for string s
void incorrectlyGetsString() {
    char *s;
    printf("s:");
    scanf("%s", s);
    printf("s: %s\n", s);

    // dangerously gets a string using scanf
    // what if user inputs more than 4 characters?
    char str[4];
    printf("s:");
    scanf("%s", s);
}

// interesting!
// make sure to remember this
// de-reference is super important
void swapIntegers(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
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
// and free space at the end
void testValgrind() {
    char *s = malloc(3);
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






