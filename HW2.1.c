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
printf("QUESTION 1 (a):\n");
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
printf("\n\n");

///y = ((x − 7)x + 8)x − 0.35 at x =1.37
char b[10];
float y1 = (((x - 7) * x) + 8)*x - 0.35;
float y2 = y1;
printf("QUESTION 1 (b):\n");
printf("True Value is: %f\n", y1);
sprintf(b, "%.3f", y1);
sscanf(b, "%f", &y1);
printf("Chopped Value is: %f\n", y1);
float true_error1 = (y2 - y1);
printf("True Error is: %f\n", true_error1);
float relative_error1 = (true_error1 / y1 );
printf("Relative Error is: %f\n", relative_error1);
float percent_error1 = (true_error1 / y1) * 100;
printf("Percent Error is %% %f\n", percent_error1);
  return 0;
}
