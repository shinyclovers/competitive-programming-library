---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/Library/DSL/disjoint_set.test.cpp
    title: aizu/Library/DSL/disjoint_set.test.cpp
  - icon: ':heavy_check_mark:'
    path: library-checker/data-structures/unionfind.test.cpp
    title: library-checker/data-structures/unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"datastructures/disjointsetunion.hpp\"\n\n\n\n#include <vector>\n\
    \nclass DisjoinSetUnion{\n  public:\n  DisjoinSetUnion(int n): parent(n) {\n \
    \   for(int i = 0 ; i < n ; i++) parent[i] = i;\n  }\n\n  int find(int u) {\n\
    \    if(parent[u] == u) return u;\n    return parent[u] = find(parent[u]);\n \
    \ }\n\n  bool merge(int u, int v){\n    u = find(u), v = find(v);\n    if(u !=\
    \ v){\n      parent[u] = v;\n      return true;\n    }\n    return false;\n  }\n\
    \n  private:\n  std::vector<int> parent;\n};\n\n\n"
  code: "#ifndef __DISJOINT_SET_UNION_HPP__\n#define __DISJOINT_SET_UNION_HPP__\n\n\
    #include <vector>\n\nclass DisjoinSetUnion{\n  public:\n  DisjoinSetUnion(int\
    \ n): parent(n) {\n    for(int i = 0 ; i < n ; i++) parent[i] = i;\n  }\n\n  int\
    \ find(int u) {\n    if(parent[u] == u) return u;\n    return parent[u] = find(parent[u]);\n\
    \  }\n\n  bool merge(int u, int v){\n    u = find(u), v = find(v);\n    if(u !=\
    \ v){\n      parent[u] = v;\n      return true;\n    }\n    return false;\n  }\n\
    \n  private:\n  std::vector<int> parent;\n};\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: datastructures/disjointsetunion.hpp
  requiredBy: []
  timestamp: '2023-10-06 17:24:32-04:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/Library/DSL/disjoint_set.test.cpp
  - library-checker/data-structures/unionfind.test.cpp
documentation_of: datastructures/disjointsetunion.hpp
layout: document
redirect_from:
- /library/datastructures/disjointsetunion.hpp
- /library/datastructures/disjointsetunion.hpp.html
title: datastructures/disjointsetunion.hpp
---
