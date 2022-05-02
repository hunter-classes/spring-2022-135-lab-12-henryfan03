#include <iostream>
#include <vector>
#include "funcs.h"

int main() {
  std::cout << "Task A:" << std::endl;
  std::cout << "------------------" << std::endl;
  std::vector<int> first = makeVector(5);
  std::cout << "makeVector(5): ";
  printVector(first);
  std::vector<int> second = makeVector(0);
  std::cout << "makeVector(0): ";
  printVector(second);
  std::vector<int> third = makeVector(10);
  std::cout << "makeVector(10): ";
  printVector(third);
  std::cout << std::endl;
  std::cout << "Task B:" << std::endl;
  std::cout << "------------------" << std::endl;
  std::vector<int> v{1,2,-1,3,4,-1,6};
  std::cout << "vector<int> v{1,2,-1,3,4,-1,6};" << std::endl;
  std::vector<int> goodv = goodVibes(v);
  std::cout << "goodVibes(v); ";
  printVector(goodv);
  std::cout << std::endl;
  std::cout << "Task C:" << std::endl;
  std::cout << "------------------" << std::endl;
  std::vector<int> v1 = {1,2,3};
  std::vector<int> v2 = {4,5};
  std::cout << "vector<int> v1{1,2,3};\nvector<int> v2{4,5};\n";
  std::cout << "gogeta(v1, v2);\n";
  gogeta(v1, v2);
  std::cout << "v1 = ";
  printVector(v1);
  std::cout << "v2 = ";
  printVector(v2);
  std::cout << std::endl;
  std::cout << "Task D:" << std::endl;
  std::cout << "------------------" << std::endl;
  v1 = {1,2,3};
  v2 = {4,5};
  std::cout << "vector<int> v1{1,2,3};\nvector<int> v2{4,5};\n";
  std::cout << "sumPairWise(v1, v2): ";
  std::vector<int> sumv = sumPairWise(v1, v2);
  printVector(sumv);
  std::cout << std::endl;
  std::cout << std::endl;
  return 0;
}
