#include <iostream>
#include <vector>

vector<int> makeVector(int n) {
  vector<int> result = {};
  for (int i = 0;i < n;i++) {
    result.push_back(i);
  }
  return result;
}

vector<int> goodVibes(const vector<int> v&) {
  vector<int> result = {};
  for (int i = 0;i < n;i++) {
    if (v[i] < 0) {
      result.push_back(-1*v[i]);
    }
    else {
      result.push_back(v[i]);
    }
  return result;
}

void gogeta(vector<int> &goku, vector<int> &vegeta) {
  for (int i = 0;i < vegeta.size();i++) {
    goku.push_back(vegeta[i]);
    vegeta.pop_back();
  }
}

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) {
  vector<int> result = {};
  int len1 = v1.size();
  int len2 = v2.size();
  if (len1 > len2) {
    for (int i =  0;i < len2;i++) {
      result.push_back(v1[i] + v2[i]);
    }
    for (int i = len2-1;i < len1;i++) {
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
    for (int i = len1-1;i < len2;i++) {
      result.push_back(v2[i]);
    }
  }
  return result;
}
