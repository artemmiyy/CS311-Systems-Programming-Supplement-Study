#include <stdio.h>

int main(int argc, char* argv[]) {
    unsigned int flags;
    
    int x,y;
    x = 1;
    y = 0;

    if (x == 1) {
        printf("1st feature is enabled\n")
    }
    
    if (y == 1) {
        printf("2nd feature is enabled\n")
    }
    return 0;
} 