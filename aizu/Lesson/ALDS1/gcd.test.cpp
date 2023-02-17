#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_1_B"
#include <iostream>
#include "math/gcd.hpp"

int main(){
  long long int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
}