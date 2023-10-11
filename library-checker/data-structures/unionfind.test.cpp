#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
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