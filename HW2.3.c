#include <stdio.h>
#include <math.h>

int main(){

// y= 25x^3 - 6x^2 +7x -88
//x =1 base point f(3) = ?
double y, x, x0;
x = 3;
x0 = 1;
double y0, y1, y2, y3, y4;
y = (25*(pow(x, 3))) - (6*(pow(x, 2))) + (7*x) -88;
y0 = (75*(pow(x, 2))) - (12*x) + 7; // y'
y1 = (150*x) - 12; //y"
y2 = 150 ;//y"'
y3 = 0; //y""
y4 = 0; //y""'
double y001, y00, y01, y02, y03, y04;
y001 = (25*(pow(x0, 3))) - (6*(pow(x0, 2))) + (7*x0) -88;
y00 = (75*(pow(x0, 2))) - (12*x0) + 7; // y'
y01 = (150*x0) - 12; //y"
y02 = 150 ;//y"'
y03 = 0; //y""
y04 = 0; //y""'
double ts0, ts1, ts2, ts3, ts4, ts; //taylor series
float exact = 554;
printf("y  : %lf\n", y);
printf("y0 : %lf\n", y0);
printf("y1 : %lf\n", y1);
printf("y2 : %lf\n", y2);
printf("y3 : %lf\n", y3);
printf("y4 : %lf\n", y4);
ts = (y001) + (y00*(x-x0)) + ((y01*(pow((x-x0), 2)))/2) + ((y02*(pow((x-x0), 3)))/6)
+ ((y03*(pow((x-x0), 4)))/24) + ((y04*(pow((x-x0), 5)))/120);
ts0 = (y001);
ts1 = (y001) + (y00*(x-x0));
ts2 = (y001) + (y00*(x-x0)) + ((y01*(pow((x-x0), 2)))/2);
ts3 = (y001) + (y00*(x-x0)) + ((y01*(pow((x-x0), 2)))/2) + ((y02*(pow((x-x0), 3)))/6);
ts4 = (y001) + (y00*(x-x0)) + ((y01*(pow((x-x0), 2)))/2) + ((y02*(pow((x-x0), 3)))/6) + ((y03*(pow((x-x0), 4)))/24);
printf("n =0, ts :%f\n", ts0);
float e0 = ((exact-ts0)/exact)*100 ;
printf("Error is%%%f\n",e0);
printf("n =1, ts :%f\n", ts1);
float e1 = ((exact-ts1)/exact)*100 ;
printf("Error is%%%f\n",e1);
printf("n =2, ts :%f\n", ts2);
float e2 = ((exact-ts2)/exact)*100 ;
printf("Error is%%%f\n",e2);
printf("n =3, ts :%f\n", ts3);
float e3 = ((exact-ts3)/exact)*100 ;
printf("Error is%%%f\n",e3);
printf("n =4, ts :%f\n", ts4);
float e4 = ((exact-ts4)/exact)*100 ;
printf("Error is%%%f\n",e4);
  return 0;
}
