#include <cstdio> 

struct Element {
    Element* next = nullptr;
    Element* prev = nullptr;
    void insert_after(Element* new_elem) {
        new_elem->next = this->next;
        new_elem->prev = this;
        if (this->next != nullptr) this->next->prev = new_elem;
        this->next = new_elem;
    }
    int opcode;
    char prefix[2];
};


int main () {
    Element a, b, c;
    a.prefix[0] = 'h';
    a.prefix[1] = 'i';
    a.opcode = 123;
    a.insert_after(&b);

    b.prefix[0] = 'h';
    b.prefix[1] = 'i';
    b.opcode = 456;
    b.insert_after(&c);

    c.prefix[0] = 'h';
    c.prefix[1] = 'i';
    c.opcode = 789;

    for(auto* e = &a; e != nullptr; e = e->next) {
        printf("The opcode is %d\n", e->opcode);
    }
    printf("going bacvkwards ... \n");
    for(auto* e = &c; e != nullptr; e = e->prev) {
        printf("The opcode is %d\n", e->opcode);
    }

    return 0;
}
