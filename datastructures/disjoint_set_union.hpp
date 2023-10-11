#ifndef __DISJOINT_SET_UNION_HPP__
#define __DISJOINT_SET_UNION_HPP__

#include <vector>

class DisjoinSetUnion{
  public:
  DisjoinSetUnion(int n): parent(n) {
    for(int i = 0 ; i < n ; i++) parent[i] = i;
  }

  int find(int u) {
    if(parent[u] == u) return u;
    return parent[u] = find(parent[u]);
  }

  bool merge(int u, int v){
    u = find(u), v = find(v);
    if(u != v){
      parent[u] = v;
      return true;
    }
    return false;
  }

  private:
  std::vector<int> parent;
};

#endif