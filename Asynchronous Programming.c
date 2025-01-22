#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep()

// Async task function
void async_task(int id) {
    sleep(2);  // Simulate async task
    printf("Async task %d finished\n", id);
}

// Main function to run asynchronous tasks
int main() {
    printf("Starting tasks...\n");

    // Start two async tasks
    async_task(1);
    async_task(2);

    // Wait for tasks to finish
    sleep(3);
    printf("All tasks finished.\n");

    return 0;
}
