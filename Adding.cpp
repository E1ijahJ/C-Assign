#include <iostream>


/// @brief  this function just takes to integers and adds them together in a stack
/// @param a 
/// @param b 
/// @return 
int add_Stack(int a, int b){
    return a+b;
}
/// @brief  this function also takes to intgers as but then deletes the refernces of the intgers in the memory only returning the sum
/// @param a 
/// @param b 
/// @return 
int add_Heap(int* a, int* b){
    int sum = *a +*b;
    delete a;
    delete b;
    return sum;
}
/// @brief this does a mix of both only deleting one of the refernces int he computers memory as a
/// @param Snum 
/// @param Hnum 
/// @return 
int add_Mixed(int Snum, int* Hnum){
    int sum = Snum + *Hnum;
    delete Hnum;
    return sum;
}
