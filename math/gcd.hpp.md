---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: aizu/Lesson/ALDS1/gcd.test.cpp
    title: aizu/Lesson/ALDS1/gcd.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/gcd.hpp\"\n#include <algorithm>\n\nlong long int gcd(long\
    \ long int a, long long int b){\n  if(a > b) std::swap(a, b);\n  if(a == 0) return\
    \ b;\n  return gcd(a, b % a);\n}\n"
  code: "#include <algorithm>\n\nlong long int gcd(long long int a, long long int\
    \ b){\n  if(a > b) std::swap(a, b);\n  if(a == 0) return b;\n  return gcd(a, b\
    \ % a);\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/gcd.hpp
  requiredBy: []
  timestamp: '2023-02-17 21:15:05-05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - aizu/Lesson/ALDS1/gcd.test.cpp
documentation_of: math/gcd.hpp
layout: document
redirect_from:
- /library/math/gcd.hpp
- /library/math/gcd.hpp.html
title: math/gcd.hpp
---
