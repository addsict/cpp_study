#include <iostream>
#include "stack.h"

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;

    return 0;
}
