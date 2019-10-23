#ifndef P_FUNCTIONS
#define P_FUNCTIONS
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
