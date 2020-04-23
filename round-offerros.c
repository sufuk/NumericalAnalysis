#include <stdio.h>


int main(){


double x = 0.1;
int i;

for(i = 1 ; i < 1000 ; i++){

x = x + 0.1 ;

}

printf("%lf\n", x);


float y = 0.1;
for(i = 1 ; i < 1000 ; i++){

  y = y + 0.1;

}

printf("%f\n", y);
///////////////////////////////////

double k1 = 1;
double n1 = 100000000;
double form = 0;

for(k1 ; k1 <= n1 ; k1++){


form += 1 / (k1 * k1) ;



}

printf("%lf\n", form);

double k2 = 100000000;
double n2 = 1;
double sum = 0;
for(k2 ; k2 >= n2 ; k2--){

sum += 1 / (k2 * k2);

}

printf("%lf\n", sum);





  return 0;
}
