#include <cstdio> 

int main () {
    auto orig = 100;
    auto& orig_ref = orig;
    printf("Original value: %d\n", orig);
    printf("Original ref value: %d\n", orig_ref);

    auto newval = 200;
    orig_ref = newval;
    printf("Original value: %d\n", orig);
    printf("New value: %d\n", newval);
    printf("Original ref value: %d\n", orig_ref);
    return 0;
}
