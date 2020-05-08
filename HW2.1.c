#include <stdio.h>
#include <math.h>

int main(){



//y = x^3 - 7(x^2) + 8x - 0.35    at x= 1.37
float y;
float x;
float y0;
x = 1.37;
char a[10];
y = pow(x, 3) - 7*(pow(x, 2)) + 8*x - 0.35;
y0 = y;
printf("True Value is: %lf\n", y0);
sprintf(a, "%.3f", y);
sscanf(a, "%f", &y);
printf("Chopped Value is: %f\n", y);
float true_error = (y - y0)* (-1);
printf("True Error is: %f\n", true_error);
float relative_error = (true_error / y );
printf("Relative Error is: %f\n", relative_error);
float percent_error = (true_error / y) * 100;
printf("Percent Error is %% %f\n", percent_error);


///y = ((x − 7)x + 8)x − 0.35 at x =1.37


  return 0;
}
