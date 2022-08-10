#include <stdio.h>
#include <math.h>

int main() {
	
  double a, b, c;
  double d = 0;
  double x;

  printf("Zadaj cleny kvad. rovnice v tvare a b c: ");
  scanf_s("%lf %lf %lf", &a, &b, &c);

  if (a == 0) {
	  printf("Toto neni kvad. rovnica \n");
  }
  else {
	  d = (b * b) - (4 * a * c);
	  printf("Diskriminant je: %lf \n", d);
  }
  if (d > 0) {
	  x = (-b + sqrt(d)) / (2 * a);
	  printf("x1 = %lf \n", x);

	  x = (-b - sqrt(d)) / (2 * a);
	  printf("x2 = %lf \n", x);
  }
  else {
	  if (d == 0) {
		  x = (-b) / (2 * a);
		  printf("Rovnica ma len jeden koren x: %lf \n", x);

	  }
	  else {
		  printf("Diskriminant je zaporny. Rovnica nema riesenie. \n");
	  }
  }
  return 0;
}