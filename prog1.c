#include <stdio.h>

float n1,n2,n3;

void main() {
  // n1=5+3*8/2-3;
  // n2=17%3*11;
  // n3-2*4*(5+9.0/2);

  printf("Podaj pierwszą liczbę\n");
  scanf("%f", &n1);
  printf("Podaj drugą liczbę\n");
  scanf("%f", &n2);
  printf("Podaj trzecią liczbę\n");
  scanf("%f", &n3);

  printf("n1 = %f\nn2 = %f\nn3 = %f\n\n", n1,n2,n3);
  // return 0;
}  
