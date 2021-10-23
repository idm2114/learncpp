#include <cstdio>

enum class Operation {
    add,
    subtract,
    divide,
    multiply
};

struct Calculator {
    Operation op;
    Calculator(Operation m) {
        op = m;
    }
    int calculate(int a, int b) {
        switch(op) {
            case Operation::add: { 
                return a + b;
            } break;
            case Operation::subtract: { 
                return a - b;
            } break;
            case Operation::multiply: { 
                return a * b;
            } break;
            case Operation::divide: { 
                return a / b;
            } break;
            default: {
                printf("No math operation recognized!\n");
            }
        }
        return -1;
    }
};

int main() {

    Calculator c { Operation::add };
    printf("Testing calculator: %d\n", c.calculate(4,5));
    return 0;
}
