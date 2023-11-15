#include <iostream>

template <typename NUM>
inline int compare(NUM n1, NUM n2){
    return n1 == n2 ? 0 : (n1 > n2 ? 1 : -1);
}

int main(){
    float f1, f2;
    f1 = 3.1;
    f2 = 3.14;
    std::cout << compare(f1, f2) << std::endl;
}