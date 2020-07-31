#include<stdio.h>
#include<math.h>
  int main()
  {
    printf("Enter the number and opeartor and number :\n");
    float a,b;
    char ch;
    scanf("%f %c %f",&a,&ch,&b);
    switch(ch)
     {
        case  '+':
            printf("%f",a+b);
            break;
        case '-':
            printf("%f",a-b);
            break;
        case '*':
            printf("%f",a*b);
            break;
        case '/':
            printf(" %f",a/b);
            break;
        case '^':
            printf("%f",pow(a,b));
            break;
        default:
           printf("Invalid operater");
     }
     return 0;
  }
 
