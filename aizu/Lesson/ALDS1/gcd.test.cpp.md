---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/gcd.hpp
    title: math/gcd.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_1_B
  bundledCode: "#line 1 \"aizu/Lesson/ALDS1/gcd.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_1_B\"\
    \n#include <iostream>\n#line 1 \"math/gcd.hpp\"\n#include <algorithm>\n\nlong\
    \ long int gcd(long long int a, long long int b){\n  if(a > b) std::swap(a, b);\n\
    \  if(a == 0) return b;\n  return gcd(a, b % a);\n}\n#line 4 \"aizu/Lesson/ALDS1/gcd.test.cpp\"\
    \n\nint main(){\n  long long int a, b;\n  std::cin >> a >> b;\n  std::cout <<\
    \ gcd(a, b) << std::endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_1_B\"\
    \n#include <iostream>\n#include \"math/gcd.hpp\"\n\nint main(){\n  long long int\
    \ a, b;\n  std::cin >> a >> b;\n  std::cout << gcd(a, b) << std::endl;\n}"
  dependsOn:
  - math/gcd.hpp
  isVerificationFile: true
  path: aizu/Lesson/ALDS1/gcd.test.cpp
  requiredBy: []
  timestamp: '2023-02-17 21:15:05-05:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: aizu/Lesson/ALDS1/gcd.test.cpp
layout: document
redirect_from:
- /verify/aizu/Lesson/ALDS1/gcd.test.cpp
- /verify/aizu/Lesson/ALDS1/gcd.test.cpp.html
title: aizu/Lesson/ALDS1/gcd.test.cpp
---
