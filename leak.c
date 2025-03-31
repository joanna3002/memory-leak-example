#include <stdio.h>
#include <stdlib.h>

void memory_leak() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
}      

   free(ptr);  
}
 
int main() {
    memory_leak();
    return 0;
}
