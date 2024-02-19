#include <stdlib.h>
typedef struct IntVector{
    size_t size;
    size_t capacity;
    int* zero_pointer;
} IntVector;

IntVector* int_vector_new(size_t initial_capacity){
    IntVector* vector = malloc(sizeof(IntVector));
    if (vector == NULL) return NULL;
    vector->size = 0;
    vector->capacity = initial_capacity;
    vector->zero_pointer = (int*) (malloc(initial_capacity *sizeof(int)));
    if (vector->zero_pointer == NULL) return NULL;
    return vector;
}

IntVector* int_vector_copy(const IntVector * v){
    
}