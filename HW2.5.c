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
double s0 =sphere_surface(0.15, 3.14);//real
double s1 =sphere_surface(0.16, 3.14);
double s2 =sphere_surface(0.14, 3.14);
  return 0;
}
