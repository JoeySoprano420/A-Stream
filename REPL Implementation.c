#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start_repl() {
    char input[256];
    
    while (1) {
        printf("a-stream> ");
        fgets(input, sizeof(input), stdin);
        
        // Exit on "quit"
        if (strcmp(input, "quit\n") == 0) {
            break;
        }
        
        // Evaluate and print result (for simplicity, just echoing input here)
        printf("Evaluated: %s\n", input);
        
        // In a full implementation, this would involve parsing and evaluating the input dynamically.
    }
}

int main() {
    start_repl();
    return 0;
}
