#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> // For memcpy

#define ARRAY_SIZE 10000
#define ITERATIONS 100

// Function to simulate C# funA (pass-by-value, effectively a pointer copy in C)
void funA(int* sourceArray) {
    int* destArray = (int*)malloc(ARRAY_SIZE * sizeof(int));
    if (destArray == NULL) {
        perror("Memory allocation failed in funA");
        exit(EXIT_FAILURE);
    }
    memcpy(destArray, sourceArray, ARRAY_SIZE * sizeof(int));
    free(destArray); // Free allocated memory
}

// Function to simulate C# funB (pass-by-reference using a pointer to pointer)
// In C#, 'ref int[] a' means 'a' itself can be reassigned inside the function,
// but here we are just copying the content, so passing 'int* a' is sufficient
// if we don't intend to reassign 'a' itself.
// If we wanted to reassign 'a' (the pointer to the array) inside funB,
// we would need 'int** a'. For simple content copy, 'int* a' is fine.
void funB(int* sourceArray) {
    int* destArray = (int*)malloc(ARRAY_SIZE * sizeof(int));
    if (destArray == NULL) {
        perror("Memory allocation failed in funB");
        exit(EXIT_FAILURE);
    }
    memcpy(destArray, sourceArray, ARRAY_SIZE * sizeof(int));
    free(destArray); // Free allocated memory
}

int main() {
    // For timing
    clock_t start, end;
    double cpu_time_used;

    // Allocate and initialize the source array
    int* a = (int*)malloc(ARRAY_SIZE * sizeof(int));
    if (a == NULL) {
        perror("Memory allocation failed in main");
        return EXIT_FAILURE;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Fill the array with random numbers
    for (int i = 0; i < ARRAY_SIZE; i++) {
        a[i] = rand();
    }

    // Benchmark funA
    start = clock();
    for (int i = 0; i < ITERATIONS; i++) {
        funA(a);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("funA (pass-by-value) execution time: %f seconds\n", cpu_time_used);

    // Benchmark funB
    start = clock();
    for (int i = 0; i < ITERATIONS; i++) {
        funB(a);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("funB (pass-by-pointer) execution time: %f seconds\n", cpu_time_used);

    // Free the main array
    free(a);

    return 0;
}
