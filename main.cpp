#include <iostream>
#include <iomanip>
#include "Money.hpp"

using namespace std;

int main()
{
  Money x, a, b;
  x.Read   (a, b);
  x.Display(a, b);
  cout << " SUMMA: " << x.ToString(a, b) << endl;
  x.Money::Dif     (a, b);
  x.Money::Multiply(a, b);

    

  return 0;
}
