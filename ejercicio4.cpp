#include <iostream>

#include <math.h>

using namespace std;

int main()
{
  string a;
  int b, c;
  
  float x;

  cout<< "Ingrese su producto";
  cin>> a;

    cout<< "Ingrese el coste del producto";
  cin>> b;

    cout<< "Ingrese la cantidad que desea";
  cin>> c;

    x= b*c;

    cout << "Producto:" << a << " (" << c << ")" << endl;
    cout << "Coste del producto:" << b << endl;
    cout << "Coste Total:" << x;
  return 0;





}