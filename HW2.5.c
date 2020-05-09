#include <stdio.h>
#include <math.h>
double boltzmann(double A, double e, double T){
  double H;
  double constant = (5.67)*(pow(10, -8));
  H = (A)*(e)*(constant)*(pow(T, 4));

  return H;
}

double sphere_surface(double radius, double pi){
  //he Surface Area of a Sphere with radius r equals 4πr^2
  double A;
  A = (4*pi)*(pow(radius, 2));
  return A;
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
double a0 = boltzmann(0.15, 0.90, 650);
double a1 = boltzmann(0.15, 0.90, 670);
double a2 = boltzmann(0.15, 0.90, 630);
printf("    SECTION A   \n\n");
printf("T= 650, H= %lf\n", a0);
printf("T= 670, H= %lf\n", a1);
printf("T= 630, H= %lf\n", a2);
printf("    SECTION B   \n\n");
double a3 = boltzmann(0.15, 0.90, 690);
double a4 = boltzmann(0.15, 0.90, 610);
printf("T= 650, H= %lf\n", a0);
printf("T= 670, H= %lf\n", a3);
printf("T= 630, H= %lf\n", a4);
printf("    SECTION C   \n\n");
double s0 =sphere_surface(0.15, 3.14);
double s1 =sphere_surface(0.16, 3.14);
double s2 =sphere_surface(0.14, 3.14);
double e0 = 0.90;
double e1 = 0.95;
double e2 = 0.85;
double T0 = 550;
double T1 = 570;
double T2 = 530;
double a5 = boltzmann(s0, e0, T0);
double a6 = boltzmann(s0, e0, T1);
double a7 = boltzmann(s0, e0, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e0, T0, a5);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e0, T1, a6);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e0, T2, a7);
double a8 = boltzmann(s0, e1, T0);
double a9 = boltzmann(s0, e1, T1);
double a10 = boltzmann(s0, e1, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e1, T0, a8);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e1, T1, a9);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e1, T2, a10);
double a11 = boltzmann(s0, e2, T0);
double a12 = boltzmann(s0, e2, T1);
double a13 = boltzmann(s0, e2, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e2, T0, a11);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e2, T1, a12);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf\n\n", s0, e2, T2, a13);
//
double a14 = boltzmann(s1, e0, T0);
double a15 = boltzmann(s1, e0, T1);
double a16 = boltzmann(s1, e0, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e0, T0, a14);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e0, T1, a15);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e0, T2, a16);
double a17 = boltzmann(s1, e1, T0);
double a18 = boltzmann(s1, e1, T1);
double a19 = boltzmann(s1, e1, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e1, T0, a17);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e1, T1, a18);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e1, T2, a19);
double a20 = boltzmann(s1, e2, T0);
double a21 = boltzmann(s1, e2, T1);
double a22 = boltzmann(s1, e2, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e2, T0, a20);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e2, T1, a21);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf\n\n", s1, e2, T2, a22);
//
double a23 = boltzmann(s2, e0, T0);
double a24 = boltzmann(s2, e0, T1);
double a25 = boltzmann(s2, e0, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e0, T0, a23);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e0, T1, a24);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e0, T2, a25);
double a26 = boltzmann(s2, e1, T0);
double a27 = boltzmann(s2, e1, T1);
double a28 = boltzmann(s2, e1, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e1, T0, a26);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e1, T1, a27);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e1, T2, a28);
double a29 = boltzmann(s2, e2, T0);
double a30 = boltzmann(s2, e2, T1);
double a31 = boltzmann(s2, e2, T2);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e2, T0, a29);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e2, T1, a30);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf\n\n", s2, e2, T2, a31);
  return 0;
}
