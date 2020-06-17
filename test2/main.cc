#include <iostream>
#include "test.h"
#include <climits>

int main() {
    std::cout << "hello" << std::endl;
    std::cout << int(_kUnmerged) << std::endl;
    std::cout << TaskQueueId::kUnmerged << std::endl;
    std::cout << ULONG_MAX << std::endl;
    return 0;
}