#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("makeVector size check") {
  CHECK((makeVector(5)).size() == 5);
  CHECK((makeVector(10)).size() == 10);
  CHECK((makeVector(0)).size() == 0);
}

TEST_CASE("makeVector values check") {
  std::vector<int> a = {0,1,2,3,4};
  CHECK(makeVector(5) == a);
  std::vector<int> b = {0,1,2,3,4,5,6,7,8,9};
  CHECK(makeVector(10) == b);
  std::vector<int> c = {};
  CHECK(makeVector(0) == c);
  std::vector<int> d = makeVector(10);
  for (int i = 0;i < d.size();i++) {
    CHECK(d[i] == i);
  }
}

TEST_CASE("goodvibes check") {
  std::vector<int> a{1,2,-1,3,4,-1,6};
  std::vector<int> v = goodVibes(a);
  for (int i = 0;i < v.size();i++) {
    CHECK(v[i] > -1);
  }
  std::vector<int> negatives = {};
  for (int i = -10;i > -20;i--) {
    negatives.push_back(i);
  }
  std::vector<int> g = goodVibes(negatives);
  for (int i = 0;i < g.size();i++) {
    CHECK(g[i] > -1);
  }
}

TEST_CASE("gogeta test") {
  std::vector<int> v1 = {1,2,3};
  std::vector<int> v2 = {4,5};
  gogeta(v1,v2);
  std::vector<int> a1 = {1,2,3,4,5};
  std::vector<int> a2 = {};
  CHECK(v1.size() == 5);
  CHECK(v2.size() == 0);
  CHECK(v1 == a1);
  CHECK(v2 == a2);
}

TEST_CASE("sumPairWise test") {
  std::vector<int> b1 = {1,2,3};
  std::vector<int> b2 = {4,5};
  std::vector<int> sumv = sumPairWise(b1, b2);
  std::vector<int> checksum = {5,7,3};
  CHECK(sumv == checksum);
  CHECK(sumv.size() == b1.size());
}
