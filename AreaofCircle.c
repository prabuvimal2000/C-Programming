#include <stdio.h>
// without math.h
int main(void)
{
  float radius, area;
  printf("Enter the radius of a circle\n");
  scanf("%f", &radius);
  area = (22/7)*radius*radius;
  printf("Area of the circle = %.2f\n", area); 
  return 0;
}
