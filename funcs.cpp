#include <iostream>
#include <vector>

void printVector(std::vector<int> v) {
  std::string result = "{";
  for (int i = 0;i < v.size();i++) {
    result += std::to_string(v[i]);
    result += ",";
  }
  int stringlength = result.length();
  if (result[stringlength-1] == ',') {
    result.pop_back();
  }
  result += "}";
  std::cout << result << std::endl;
}

std::vector<int> makeVector(int n) {
  std::vector<int> result = {};
  for (int i = 0;i < n;i++) {
    result.push_back(i);
  }
  return result;
}

std::vector<int> goodVibes(const std::vector<int> v) {
  std::vector<int> result = {};
  for (int i = 0;i < v.size();i++) {
    if (v[i] < 0) {
      result.push_back(-1*v[i]);
    }
    else {
      result.push_back(v[i]);
    }
  }
  return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
  for (int i = 0;i <= vegeta.size();i++) {
    goku.push_back(vegeta[i]);
    vegeta.pop_back();
  }
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
  std::vector<int> result = {};
  int len1 = v1.size();
  int len2 = v2.size();
  if (len1 > len2) {
    for (int i =  0;i < len2;i++) {
      result.push_back(v1[i] + v2[i]);
    }
    for (int i = len2;i < len1;i++) {
      result.push_back(v1[i]);
    }
  }
  else if (len1 == len2) {
    for (int i = 0;i < len1;i++) {
      result.push_back(v1[i] + v2[i]);
    }
  }
  else {
    for (int i =  0;i < len1;i++) {
      result.push_back(v1[i] + v2[i]);
    }
    for (int i = len1;i < len2;i++) {
      result.push_back(v2[i]);
    }
  }
  return result;
}
