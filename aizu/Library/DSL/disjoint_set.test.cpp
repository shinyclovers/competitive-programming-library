#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A"
#include <iostream>
#include "datastructures/disjoint_set_union.hpp"

int main(){
  int n, q;
  std::cin >> n >> q;
  DisjoinSetUnion dsu(n);
  for (int i = 0 ; i < q ; i++) {
    int t, u, v;
    std::cin >> t >> u >> v;
    if (t == 0) dsu.merge(u, v);
    else std::cout << (dsu.find(u) == dsu.find(v)) << std::endl;
  }
}