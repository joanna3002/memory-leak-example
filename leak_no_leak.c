#include <stdlib.h>
#include <stdio.h>
 void memory_leak() {
     int* ptr = (int*)malloc(sizeof(int));
     if (ptr == NULL) {
         printf("Memory allocation failed\n");
         return;
}
*ptr = 100;
printf("Allocated memory value: %d\n", *ptr);

free(ptr);
}

int main() {
    memory_leak();
    return 0;
}
