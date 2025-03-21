
#include <gtest/gtest.h>
#include "Adding.cpp"
#include "Point3D.cpp"


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
TEST(PointTest, AdditionOperator) {
    Point3D p1(1.5, 2.5, 3.5);
    Point3D p2(4.5, 5.5, 6.5);
    Point3D result = p1 + p2;

    EXPECT_DOUBLE_EQ(result.x, 6.0);
    EXPECT_DOUBLE_EQ(result.y, 8.0);
    EXPECT_DOUBLE_EQ(result.z, 10.0);
}


