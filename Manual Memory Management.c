#define MEMORY_POOL_SIZE 1024  // Define the size of our custom memory pool

// Memory Pool structure
typedef struct {
    char pool[MEMORY_POOL_SIZE];
    size_t used;
} MemoryPool;

// Function to initialize memory pool
void init_memory_pool(MemoryPool* mp) {
    mp->used = 0;
}

// Function to allocate memory from the pool
void* allocate(MemoryPool* mp, size_t size) {
    if (mp->used + size > MEMORY_POOL_SIZE) {
        return NULL;  // Not enough memory
    }
    void* ptr = &mp->pool[mp->used];
    mp->used += size;
    return ptr;
}

// Function to free memory (simplified in this case)
void free_memory(MemoryPool* mp, size_t size) {
    if (mp->used >= size) {
        mp->used -= size;
    }
}
