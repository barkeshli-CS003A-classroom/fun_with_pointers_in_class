#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
using namespace std;
#include "../../includes/fun/fun.h"
bool test_stub(bool debug = false)
{
  if (debug){
    cout << "testB:: test-sub() entering test_sub" << endl;
  }
  int a[20];
  int size = 0;

  for (int i = 0; i < 5; i++){
    append_array(a, size, i);
    print_array(a, size);
  }
    return true;
}

TEST(TEST_STUB, TestStub) {
  
  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_stub(false));
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

