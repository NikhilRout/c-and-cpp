#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  for(float fahr = LOWER;fahr<=UPPER;fahr+=STEP){
    printf("%3.0f%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
  }

  return 0;
}

  /*float fahr, celsius; 
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step= 20;
  fahr =lower;
  printf("Celcius\tFahrenheit\n");
  while (fahr <= upper) {
  celsius = (5.0/9.0) * (fahr-32.0); 
  printf("%7.0f %10.2f\n", fahr, celsius);
  fahr+= step;
  }*/