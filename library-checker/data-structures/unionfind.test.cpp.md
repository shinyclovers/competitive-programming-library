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
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"library-checker/data-structures/unionfind.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include <iostream>\n\
    #line 1 \"datastructures/disjointsetunion.hpp\"\n\n\n\n#include <vector>\n\nclass\
    \ DisjoinSetUnion{\n  public:\n  DisjoinSetUnion(int n): parent(n) {\n    for(int\
    \ i = 0 ; i < n ; i++) parent[i] = i;\n  }\n\n  int find(int u) {\n    if(parent[u]\
    \ == u) return u;\n    return parent[u] = find(parent[u]);\n  }\n\n  bool merge(int\
    \ u, int v){\n    u = find(u), v = find(v);\n    if(u != v){\n      parent[u]\
    \ = v;\n      return true;\n    }\n    return false;\n  }\n\n  private:\n  std::vector<int>\
    \ parent;\n};\n\n\n#line 4 \"library-checker/data-structures/unionfind.test.cpp\"\
    \n\nint main(){\n  int n, q;\n  std::cin >> n >> q;\n  DisjoinSetUnion dsu(n);\n\
    \  for (int i = 0 ; i < q ; i++) {\n    int t, u, v;\n    std::cin >> t >> u >>\
    \ v;\n    if (t == 0) dsu.merge(u, v);\n    else std::cout << (dsu.find(u) ==\
    \ dsu.find(v)) << std::endl;\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include <iostream>\n\
    #include \"datastructures/disjointsetunion.hpp\"\n\nint main(){\n  int n, q;\n\
    \  std::cin >> n >> q;\n  DisjoinSetUnion dsu(n);\n  for (int i = 0 ; i < q ;\
    \ i++) {\n    int t, u, v;\n    std::cin >> t >> u >> v;\n    if (t == 0) dsu.merge(u,\
    \ v);\n    else std::cout << (dsu.find(u) == dsu.find(v)) << std::endl;\n  }\n\
    }"
  dependsOn:
  - datastructures/disjointsetunion.hpp
  isVerificationFile: true
  path: library-checker/data-structures/unionfind.test.cpp
  requiredBy: []
  timestamp: '2023-10-06 17:24:32-04:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: library-checker/data-structures/unionfind.test.cpp
layout: document
redirect_from:
- /verify/library-checker/data-structures/unionfind.test.cpp
- /verify/library-checker/data-structures/unionfind.test.cpp.html
title: library-checker/data-structures/unionfind.test.cpp
---
