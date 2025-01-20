// Dynamic Macro for Debugging
#ifdef DEBUG
    #define LOG(message) printf("[DEBUG]: %s\n", message)
#else
    #define LOG(message) // No-op in release mode
#endif
