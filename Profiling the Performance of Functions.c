#include <stdio.h>
#include <time.h>

// Function to profile
void some_expensive_function() {
    // Simulate work
    for (volatile int i = 0; i < 1000000; i++) {}
}

void profile_function() {
    clock_t start = clock();
    
    some_expensive_function();
    
    clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Function executed in: %f seconds\n", duration);
}
