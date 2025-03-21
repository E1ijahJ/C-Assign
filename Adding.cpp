#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int add_Stack(int a, int b){
    return a+b;
}

int add_Heap(int* a, int* b){
    int sum = *a +*b;
    delete a;
    delete b;
    return sum;
}

int add_Mixed(int Snum, int* Hnum){
    int sum = Snum + *Hnum;
    delete Hnum;
    return sum;
}
