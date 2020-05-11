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
double a0 = boltzmann(0.15, 0.90, 650);
double a1 = boltzmann(0.15, 0.90, 670);
double a2 = boltzmann(0.15, 0.90, 630);
double ea0 =  (a1 - a2)/2;
printf("    SECTION A   \n\n");
printf("T= 650, H= %lf\n", a0);
printf("T= 670, H= %lf\n", a1);
printf("T= 630, H= %lf\n", a2);
printf("ERROR = (H(670)-H(630))/2 = %lf ",ea0);
printf("\n\n  SECTION B   \n\n");
double a3 = boltzmann(0.15, 0.90, 690);
double a4 = boltzmann(0.15, 0.90, 610);
double ea1 = (a3-a4)/2;
printf("T= 650, H= %lf\n", a0);
printf("T= 690, H= %lf\n", a3);
printf("T= 610, H= %lf\n", a4);
printf("ERROR = (H(670)-H(630))/2 = %lf",ea1);
printf("\n\n  SECTION C   \n\n");
//e=0.90±0.05 T=550±20K
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
double e000 = (a6-a7)/2;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e0, T0, a5);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e0, T1, a6);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e0, T2, a7);
double a8 = boltzmann(s0, e1, T0);
double a9 = boltzmann(s0, e1, T1);
double a10 = boltzmann(s0, e1, T2);
double e001 = (a9-a8)/2;

printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e1, T0, a8);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e1, T1, a9);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e1, T2, a10);
double a11 = boltzmann(s0, e2, T0);
double a12 = boltzmann(s0, e2, T1);
double a13 = boltzmann(s0, e2, T2);
double e002 = (a12-a13)/2;
double e003 = (e002 + e001 + e000)/3;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e2, T0, a11);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e2, T1, a12);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s0, e2, T2, a13);
printf("\nERROR0 =  = %lf \n\n",e003);
//
double a14 = boltzmann(s1, e0, T0);
double a15 = boltzmann(s1, e0, T1);
double a16 = boltzmann(s1, e0, T2);
double e004 = (a15-a16)/2;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e0, T0, a14);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e0, T1, a15);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e0, T2, a16);
double a17 = boltzmann(s1, e1, T0);
double a18 = boltzmann(s1, e1, T1);
double a19 = boltzmann(s1, e1, T2);
double e005 = (a18-a19)/2;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e1, T0, a17);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e1, T1, a18);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e1, T2, a19);
double a20 = boltzmann(s1, e2, T0);
double a21 = boltzmann(s1, e2, T1);
double a22 = boltzmann(s1, e2, T2);
double e006 = (a15-a16)/2;
double e007 = (e006 + e005 + e004)/3;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e2, T0, a20);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e2, T1, a21);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s1, e2, T2, a22);
printf("\nERROR1 =  = %lf \n\n",e007);

//
double a23 = boltzmann(s2, e0, T0);
double a24 = boltzmann(s2, e0, T1);
double a25 = boltzmann(s2, e0, T2);
double e008 = (a24-a25)/2;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e0, T0, a23);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e0, T1, a24);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e0, T2, a25);
double a26 = boltzmann(s2, e1, T0);
double a27 = boltzmann(s2, e1, T1);
double a28 = boltzmann(s2, e1, T2);
double e009 = (a27-a28)/2;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e1, T0, a26);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e1, T1, a27);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e1, T2, a28);
double a29 = boltzmann(s2, e2, T0);
double a30 = boltzmann(s2, e2, T1);
double a31 = boltzmann(s2, e2, T2);
double e010 = (a30-a31)/2;
double e011 = (e010 + e009 + e008)/3;
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e2, T0, a29);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e2, T1, a30);
printf("\nSurface: %lf  emissy: %lf temperature: %lf  H: %lf", s2, e2, T2, a31);
printf("\nERROR2 =  = %lf \n\n",e011);

  return 0;
}
