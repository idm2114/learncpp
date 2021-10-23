#include <cstdio>

int abs_value(int input) {
    if (input > 0) return input;
    else if (input == 0) return 0;
    else return input * -1;
}
    
int main() {
    printf("Result of absolute value of 75 is %d\n", abs_value(75));
    printf("Result of absolute value of -23 is %d\n", abs_value(-23));
    return 0;
}
