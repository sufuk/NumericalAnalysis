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

printf("%f", y);


  return 0;
}
