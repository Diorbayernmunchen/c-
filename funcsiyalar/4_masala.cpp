#include <iostream>
#include <math.h>
using namespace std;

void Triangle(float a, float *P, float *S);

int main()
{
    float a, P, S;
   cout << "a = "; cin >> a; 
  
   Triangle(a, &P, &S);
   cout << "yuzasi = " << S << endl;
   cout << "Primetri = " << P << endl;

   return 0;
}

void Triangle(float a, float *P, float *S)
{
    *S = sqrt(3) *a * a;
    *P = 3*a;
}