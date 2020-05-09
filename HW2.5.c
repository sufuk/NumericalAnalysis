#include <stdio.h>
#include <math.h>
double myfunc(double A, double e, double T){
  double H;
  double constant = (5.67)*(pow(10, -8));

  H = (A)*(e)*(constant)*(pow(T, 4));





  return H;
}









int main(){
//H = A e σ T^4
// H= WATTS
//A= surface area
// e dimensionless
//σ stefan- boltzmann constant (5.67*10^-8 W/m^2-K^4)
// T= absolute temperature(K)
//          TO DO
//determine Error of H for stell plate A=0.15m^2, e= 0.90 T=65(+-)20K

  return 0;
}
