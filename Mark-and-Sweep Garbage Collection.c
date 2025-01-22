// Mark-and-Sweep Basic Structure
typedef struct {
    int data;
    int marked;  // Marked for GC
} GCObject;

// Simple mark-and-sweep function
void mark(GCObject* obj) {
    obj->marked = 1;
}

void sweep(GCObject* objs[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (objs[i]->marked == 0) {
            free(objs[i]);  // Free unmarked objects
        } else {
            objs[i]->marked = 0;  // Reset mark for next GC cycle
        }
    }
}
