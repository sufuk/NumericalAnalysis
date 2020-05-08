#include <stdio.h>
#include <math.h>

int main(){



//y = x^3 - 7(x^2) + 8x - 0.35    at x= 1.37 3 digit artm chop
FILE *fp;
double y;
double x;
fp = fopen("choppingboard.txt", "w");
x = 1.37;

y = pow(x, 3) - 7*(pow(x, 2)) + 8*x - 0.35;
printf("True Value is: %lf\n", y);
fwrite(&y, 1, sizeof(double), fp);
fclose(fp);

  return 0;
}
