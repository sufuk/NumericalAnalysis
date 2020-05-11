#include <stdio.h>
#include <math.h>
float myfunc(float x){
  float y;
  y = ((0.4)*(pow(x, 5))) - ((0.2)*(pow(x, 3))) + ((6)*(pow(x, 2))) - 13;
  return y;
}
float myfunc0(float x){
  float y0;
  y0 = ((2)*(pow(x, 4))) - ((0.6)*(pow(x, 2))) + (12*x);
  return y0;
}
float myfunc1(float x){
  float y0;
  y0 = ((8)*(pow(x, 3))) - ((1.2)*(pow(x, 1))) + 12;
  return y0;
}
float fwdif(float x, float h, int order){
  float z0;
  if(order == 1){
    z0 = (myfunc(x + h) - myfunc(x)) / h;
  }
  else if(order == 2){
    z0 = (myfunc(x + 2*h) - (2*(myfunc(x + h))) + myfunc(x))/(pow(h, 2));
  }
  return z0;
}
float bwdif(float x, float h, int order){
  float z0;
  if(order == 1){
    z0 = (myfunc(x) - myfunc(x-h)) / h;
  }
  else if(order == 2){
    z0 = (myfunc(x) - (2*(myfunc(x - h))) + myfunc(x - (2*h)))/(pow(h, 2));
  }
  return z0;
}
float cndif(float x, float h, int order){
  float z0;
  if(order == 1){
    z0 = (myfunc(x + h) - myfunc(x-h)) / (2*h);
  }
  else if(order == 2){
    z0 = (myfunc(x + h) - (2*(myfunc(x))) + myfunc(x-h))/(pow(h, 2));
  }
  return z0;
}
int main(){
float y0= myfunc0(2);
float a00 = fwdif(2, 1, 1);
float b00 = bwdif(2, 1, 1);
float c00 = cndif(2, 1, 1);
float ea00 = ((y0 - a00)/y0)*100;
float eb00 = ((y0 - b00)/y0)*100;
float ec00 = ((y0 - c00)/y0)*100;

printf("fwdif = %f, h = 1, Error = %f for first derivative \n",a00,ea00*(-1));
printf("bwdif = %f, h = 1, Error = %f for first derivative \n",b00,eb00);
printf("cndif = %f, h = 1, Error = %f for first derivative \n",c00,ec00*(-1));
float a01 = fwdif(2, 1, 2);
float b01 = bwdif(2, 1, 2);
float c01 = cndif(2, 1, 2);
float ea01 = ((y0 - a01)/y0)*100;
float eb01 = ((y0 - b01)/y0)*100;
float ec01 = ((y0 - c01)/y0)*100;
printf("fwdif = %f, h = 1, Error = %f for second derivative  \n",a01, ea01*(-1));
printf("bwdif = %f, h = 1, Error = %f for second derivative   \n",b01, eb01);
printf("cndif = %f, h = 1, Error = %f for second derivative  \n\n\n",c01, ec01*(-1));
float a10 = fwdif(2, 0.5, 1);
float b10 = bwdif(2, 0.5, 1);
float c10 = cndif(2, 0.5, 1);
float ea10 = ((y0 - a10)/y0)*100;
float eb10 = ((y0 - b10)/y0)*100;
float ec10 = ((y0 - c10)/y0)*100;
printf("fwdif = %f, h = 0.5, Error = %f for first derivative \n",a10, ea10*(-1));
printf("bwdif = %f, h = 0.5, Error = %f for first derivative \n",b10, eb10);
printf("cndif = %f, h = 0.5, Error = %f for first derivative \n",c10, ec10*(-1));
float a11 = fwdif(2, 0.5, 2);
float b11 = bwdif(2, 0.5, 2);
float c11 = cndif(2, 0.5, 2);
float ea11 = ((y0 - a11)/y0)*100;
float eb11 = ((y0 - b11)/y0)*100;
float ec11 = ((y0 - c11)/y0)*100;
printf("fwdif = %f, h = 0.5, Error = %f for second derivative  \n",a11, ea11*(-1));
printf("bwdif = %f, h = 0.5, Error = %f for second derivative   \n",b11, eb11);
printf("cndif = %f, h = 0.5, Error = %f for second derivative  \n\n\n",c11, ec11*(-1));
float a20 = fwdif(2, 0.25, 1);
float b20 = bwdif(2, 0.25, 1);
float c20 = cndif(2, 0.25, 1);
float ea20 = ((y0 - a20)/y0)*100;
float eb20 = ((y0 - b20)/y0)*100;
float ec20 = ((y0 - c20)/y0)*100;
printf("fwdif = %f, h = 0.25, Error = %f for first derivative \n",a20,ea20*(-1));
printf("bwdif = %f, h = 0.25, Error = %f for first derivative \n",b20,eb20*(1));
printf("cndif = %f, h = 0.25, Error = %f for first derivative \n",c20,ec20*(-1));
float a21 = fwdif(2, 0.25, 2);
float b21 = bwdif(2, 0.25, 2);
float c21 = cndif(2, 0.25, 2);
float ea21 = ((y0 - a21)/y0)*100;
float eb21 = ((y0 - b21)/y0)*100;
float ec21 = ((y0 - c21)/y0)*100;
printf("fwdif = %f, h = 0.25, Error = %f for second derivative  \n",a21,ea21*(-1));
printf("bwdif = %f, h = 0.25, Error = %f for second derivative   \n",b21,eb21);
printf("cndif = %f, h = 0.25, Error = %f for second derivative  \n\n\n",c21,ec21*(-1));
float a30 = fwdif(2, 0.1, 1);
float b30 = bwdif(2, 0.1, 1);
float c30 = cndif(2, 0.1, 1);
float ea30 = ((y0 - a30)/y0)*100;
float eb30 = ((y0 - b30)/y0)*100;
float ec30 = ((y0 - c30)/y0)*100;
printf("fwdif = %f, h = 0.1, Error = %f for first derivative \n",a30,ea30*(-1));
printf("bwdif = %f, h = 0.1, Error = %f for first derivative \n",b30,eb30*(1));
printf("cndif = %f, h = 0.1, Error = %f for first derivative \n",c30,ec30*(-1));
float a31 = fwdif(2, 0.1, 2);
float b31 = bwdif(2, 0.1, 2);
float c31 = cndif(2, 0.1, 2);
float ea31 = ((y0 - a31)/y0)*100;
float eb31 = ((y0 - b31)/y0)*100;
float ec31 = ((y0 - c31)/y0)*100;
printf("fwdif = %f, h = 0.1, Error = %f for second derivative  \n",a31,ea31*(-1));
printf("bwdif = %f, h = 0.1, Error = %f for second derivative   \n",b31,eb31*(-1));
printf("cndif = %f, h = 0.1, Error = %f for second derivative  \n\n\n",c31,ec31*(-1));
  return 0;
}
