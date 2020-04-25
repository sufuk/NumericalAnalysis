#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


/* I had a trouble because type double is cant no store
enough significant figures for these types of problems
in couple weeks you can find this code more improved in my github repo:
https://github.com/sufuk/NumericalMethods

 Semih Ufuk Güler
 200011674
 EEE #2
 sufukguler@gmail.com
  */

int main(){

  double x;
  double y;
  double hits = 0;
  double hitsinside = 0;
  double pi;
  double t;
  int i;
  srand(time(NULL));

  for(i = 0 ; i < 1000000 ; i++){

    hits++;

    x = (double)rand() / RAND_MAX;
    y = (double)rand() / RAND_MAX;
    t = sqrt(pow(x, 2) + pow(y, 2));

    if(t < 1){

    hitsinside += 1;

    }
  }

  pi = 4 * (hitsinside / hits);

  printf("PI is numerically calculated: %lf\n\n", pi);
  printf("Semih Ufuk Guler\n200011674\nEEE #2\nsufukguler@gmail.com\n");
  int a;
  scanf("%d", &a);
  //Scanf unrelated to actually it just there for becaese when you run program program its immediately shuts down without it.

return 0;
}
