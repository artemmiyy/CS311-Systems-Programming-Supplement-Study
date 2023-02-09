#include <stdio.h>
#define FIRST_FLAG 0b1
#define SECOND_FLAG 0b10
#define THIRD_FLAG 0b10000000

int main(int argc, char* argv[]) {
    // using one variable to evaluate multiple statements
    // I can store 32 features in one int (32 bits)
    // memory efficient

    unsigned int flags = FIRST_FLAG | SECOND_FLAG | THIRD_FLAG; // state of all flags

    // 1st feature 00000000 00000000 00000000 00000001
    // 2nd feature 00000000 00000000 00000000 00000010
    // 3rd feature 00000000 00000000 00000000 10000000

    // disabling second feature:
    flags = flags & ~SECOND_FLAG;

    // enabling second feature;
    flags = flags | SECOND_FLAG;

    if (flags & FIRST_FLAG) printf("1st feature is enabled\n");

    if (flags & SECOND_FLAG) printf("2nd feature is enabled\n");
    
    if (flags & THIRD_FLAG) printf("3rd feature is enabled\n");
    
    return 0;
} 