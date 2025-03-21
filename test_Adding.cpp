
#include <gtest/gtest.h>
#include "Adding.cpp"


TEST(AdditionTest, StackAddition_Poaitive){
  EXPECT_EQ(add_Stack(3,4),7);
}


TEST(AdditionTest, HeapAddition_Poaitive){
  int* a = new int(5);
  int* b = new int(15);
  
  
  EXPECT_EQ(add_Heap(a,b),20);
}


TEST(AdditionTest, MixedAddition_Poaitive){
  int* b = new int(4);
  
  EXPECT_EQ(add_Mixed(3,b),7);
}
