#include <iostream>
#include <complex>

namespace r25
{

// Examples with inputs
inline void fun(const int a, const double b)
{
  std::cout << a << b << "\n";
}

inline void fun2(const char a, const int b, std::complex<double> c)
{
  std::cout << a << b << c;
}

struct CUserDefineType
{
  int x;
  double y;
  double z;
};

inline CUserDefineType fun3(CUserDefineType const &a, CUserDefineType b)
{
  b.y += 2;
  b.x = a.x;
  // Helps the optimizer better optimize away temporaries
  return b;
}

} // namespace r25
