#include <stdio.h>
#include <math.h>

double myfunc(double x){

double y = log(pow(x,2));


return y;
}


int main(){

double exact = 1.4190765485933;
double z = myfunc(exact);
printf("True Value = %lf\n",z);
double xi = 0.5;
double xu = 2.0;
double xr = (xi + xu)/2;
double yi = myfunc(xi);
double yu = myfunc(xu);
double yr = myfunc(xr);
while(yi * yu < 0){



if((yi * yr) < 0){
  if(yi < yr){
    xu = xr;

  }
  else if(yr < yi){
    
  }

}

}










  return 0;
}
