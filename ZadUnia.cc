#include <iostream>


union Values {
    int l1;
    float l2;
};


int main() {
    
    Values val;
    val.l1 = 1;
    std::cout << val.l1 << std::endl;
    val.l2 = 3;
    std::cout << val.l2 << std::endl;
    std::cout << val.l1 << std::endl;
    return 0;
}