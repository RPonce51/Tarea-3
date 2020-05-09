#include <iostream>

#include <math.h>

using namespace std;

int main()
{
  int rad;
  float x1;
  float x2;
  cout<< "Ingrese el radio del circulo";
  cin>> rad;

  x1 = (3.1416*pow(rad, 2));
  x2 = (2*3.1416*rad);
  cout<< "Area=" << x1 << endl;
  cout<< "Perimetro=" <<x2<< endl;
  return 0;
}