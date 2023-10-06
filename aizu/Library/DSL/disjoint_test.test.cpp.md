---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: datastructures/disjointsetunion.hpp
    title: datastructures/disjointsetunion.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A
  bundledCode: "#line 1 \"aizu/Library/DSL/disjoint_test.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A\"\n#include\
    \ <iostream>\n#line 1 \"datastructures/disjointsetunion.hpp\"\n\n\n\n#include\
    \ <vector>\n\nclass DisjoinSetUnion{\n  public:\n  DisjoinSetUnion(int n): parent(n)\
    \ {\n    for(int i = 0 ; i < n ; i++) parent[i] = i;\n  }\n\n  int find(int u)\
    \ {\n    if(parent[u] == u) return u;\n    return parent[u] = find(parent[u]);\n\
    \  }\n\n  bool merge(int u, int v){\n    u = find(u), v = find(v);\n    if(u !=\
    \ v){\n      parent[u] = v;\n      return true;\n    }\n    return false;\n  }\n\
    \n  private:\n  std::vector<int> parent;\n};\n\n\n#line 4 \"aizu/Library/DSL/disjoint_test.test.cpp\"\
    \n\nint main(){\n  int n, q;\n  std::cin >> n >> q;\n  DisjoinSetUnion dsu(n);\n\
    \  for (int i = 0 ; i < q ; i++) {\n    int t, u, v;\n    std::cin >> t >> u >>\
    \ v;\n    if (t == 0) dsu.merge(u, v);\n    else std::cout << (dsu.find(u) ==\
    \ dsu.find(v)) << std::endl;\n  }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A\"\
    \n#include <iostream>\n#include \"datastructures/disjointsetunion.hpp\"\n\nint\
    \ main(){\n  int n, q;\n  std::cin >> n >> q;\n  DisjoinSetUnion dsu(n);\n  for\
    \ (int i = 0 ; i < q ; i++) {\n    int t, u, v;\n    std::cin >> t >> u >> v;\n\
    \    if (t == 0) dsu.merge(u, v);\n    else std::cout << (dsu.find(u) == dsu.find(v))\
    \ << std::endl;\n  }\n}"
  dependsOn:
  - datastructures/disjointsetunion.hpp
  isVerificationFile: true
  path: aizu/Library/DSL/disjoint_test.test.cpp
  requiredBy: []
  timestamp: '2023-10-06 18:17:27-04:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/Library/DSL/disjoint_test.test.cpp
layout: document
redirect_from:
- /verify/aizu/Library/DSL/disjoint_test.test.cpp
- /verify/aizu/Library/DSL/disjoint_test.test.cpp.html
title: aizu/Library/DSL/disjoint_test.test.cpp
---
