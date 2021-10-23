#include <cstdio>
#include <limits.h>

int sum(int a, int b) {
    int s = a + b;
    if (s - a != b) { 
        throw "IntOverflowError";
    }
    return s;
}

int main() {
    printf("This is a test of sum with 26 and 15: %d\n", sum(26,15));
    printf("This is a test of sum with int overflows: %d\n", sum(INT_MAX,15));
    return 0;
}


