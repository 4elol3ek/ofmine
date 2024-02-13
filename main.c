#include <stdio.h>

typedef struct {
    float xMiddle;
    float yMiddle;
    float rad;
} fCircle;

int main(int argc, char* argv[]){
    char charbuffer[256];
    FILE *file = fopen(argv[argc - 1], "r");
    while ((fgets (charbuffer, 256, file)) != NULL){
        printf ("%s", charbuffer);
    };
    return 0;
}
