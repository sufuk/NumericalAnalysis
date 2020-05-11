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
float a00 = fwdif(2, 1, 1);
float b00 = bwdif(2, 1, 1);
float c00 = cndif(2, 1, 1);
printf("fwdif = %f, h = 1, for first derivative \n",a00);
printf("bwdif = %f, h = 1, for first derivative \n",b00);
printf("cndif = %f, h = 1, for first derivative \n",c00);
float a01 = fwdif(2, 1, 2);
float b01 = bwdif(2, 1, 2);
float c01 = cndif(2, 1, 2);
printf("fwdif = %f, h = 1, for second derivative  \n",a01);
printf("bwdif = %f, h = 1, for second derivative   \n",b01);
printf("cndif = %f, h = 1, for second derivative  \n\n\n",c01);
float a10 = fwdif(2, 0.5, 1);
float b10 = bwdif(2, 0.5, 1);
float c10 = cndif(2, 0.5, 1);
printf("fwdif = %f, h = 0.5, for first derivative \n",a10);
printf("bwdif = %f, h = 0.5, for first derivative \n",b10);
printf("cndif = %f, h = 0.5, for first derivative \n",c10);
float a11 = fwdif(2, 0.5, 2);
float b11 = bwdif(2, 0.5, 2);
float c11 = cndif(2, 0.5, 2);
printf("fwdif = %f, h = 0.5, for second derivative  \n",a11);
printf("bwdif = %f, h = 0.5, for second derivative   \n",b11);
printf("cndif = %f, h = 0.5, for second derivative  \n\n\n",c11);
float a20 = fwdif(2, 0.25, 1);
float b20 = bwdif(2, 0.25, 1);
float c20 = cndif(2, 0.25, 1);
printf("fwdif = %f, h = 0.25, for first derivative \n",a20);
printf("bwdif = %f, h = 0.25, for first derivative \n",b20);
printf("cndif = %f, h = 0.25, for first derivative \n",c20);
float a21 = fwdif(2, 0.25, 2);
float b21 = bwdif(2, 0.25, 2);
float c21 = cndif(2, 0.25, 2);
printf("fwdif = %f, h = 0.25, for second derivative  \n",a21);
printf("bwdif = %f, h = 0.25, for second derivative   \n",b21);
printf("cndif = %f, h = 0.25, for second derivative  \n\n\n",c21);
float a30 = fwdif(2, 0.1, 1);
float b30 = bwdif(2, 0.1, 1);
float c30 = cndif(2, 0.1, 1);
printf("fwdif = %f, h = 0.1, for first derivative \n",a30);
printf("bwdif = %f, h = 0.1, for first derivative \n",b30);
printf("cndif = %f, h = 0.1, for first derivative \n",c30);
float a31 = fwdif(2, 0.1, 2);
float b31 = bwdif(2, 0.1, 2);
float c31 = cndif(2, 0.1, 2);
printf("fwdif = %f, h = 0.1, for second derivative  \n",a31);
printf("bwdif = %f, h = 0.1, for second derivative   \n",b31);
printf("cndif = %f, h = 0.1, for second derivative  \n\n\n",c31);
  return 0;
}
