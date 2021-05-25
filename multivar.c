#include<stdio.h>
int main()
{
  int var_int;
  float var_flaot;
  char var_char;
  double var_double;
  clrscr();
  print("enter the multiple values for multiple values");
  scanf("%d %f",&var_int, &var_float);
  scanf("%c %lf",&var_char, &var_double);
  printf("the output values are:");
  printf("%d %f", var_int, var_float);
  printf("%c %lf", var_char, var_double);
  return 0;
}
