#include <stdio.h>
long gcd(long, long);
long Lcm(long,long);
int main()
{
  long x, y, hcf, lcm;
  printf("Enter two integers\n");
  scanf("%ld%ld", &x, &y);
  hcf = gcd(x, y);
  lcm = Lcm(x,y);
  /*you can use formula also formula
  lcm*hcf=product of sum*/
  printf("Greatest common divisor of given numbers %ld and %ld = %ld\n", x, y, hcf);
  printf("Least common multiple of given numbers  %ld and %ld = %ld\n", x, y, lcm);
  return 0;
}
long gcd(long x, long y) 
{
  if (x == 0) {
    return y;
  }
  while (y != 0)
  {
    if (x > y) 
    {
      x = x - y;
    }
    else 
    {
      y = y - x;
    }
  }
 return x;
}
long Lcm(long a,long b)
{
    int lcm=(a>b)?a:b;
    int flag=1;
    while(flag!=0)
    {
     if(lcm%a==0&&lcm%b==0)
     {
        flag=0;
        return lcm;
     }
        lcm++;
    }
}
