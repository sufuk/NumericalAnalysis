#include <stdio.h>
#include <math.h>

double e_maclaurin(double x, int n)
{
    double sum = 0.0;
    int i;
    for (i = n - 1 ; i > 0; i-- )
        sum = 1 + ((x * sum )/ i);

    return sum;
}

int main(){
  double z = e_maclaurin(15, 100);

printf("e^%d =  %lf\n", 15, z);
  return 0;
}
