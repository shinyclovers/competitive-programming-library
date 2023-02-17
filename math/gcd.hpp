#include <algorithm>

long long int gcd(long long int a, long long int b){
  if(a < b) std::swap(a, b);
  if(a == 0) return b;
  return gcd(a, b % a);
}