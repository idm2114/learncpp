#include <cstdio>

int step_function(int x) {
    if (x > 0) return 1;
    else if (x == 0) return 0;
    else return -1;
}

int main() {
    printf("This is a test of step function with x = 100: %d\n", step_function(100));
    return 0;
}
