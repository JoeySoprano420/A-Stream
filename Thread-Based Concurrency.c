#include <pthread.h>

// Task function for thread
void* perform_task(void* arg) {
    int* data = (int*)arg;
    *data += 10;  // Simulate some work
    return NULL;
}

void example_concurrency() {
    pthread_t thread;
    int data = 0;

    // Create a new thread to perform a task
    pthread_create(&thread, NULL, perform_task, &data);

    // Wait for the thread to finish
    pthread_join(thread, NULL);

    // Now 'data' should be 10
}
