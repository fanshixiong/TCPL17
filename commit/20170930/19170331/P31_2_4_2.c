#include <stdio.h>
#include <math.h>
int main()
{
       float x,a,b,c;
       scanf("%f,%f,%f,%f",&x,&a,&b,&c);
       if (sqrt(fabs(x))!=(4*a)/(b*c))
       printf("not equal\n");
       else 
       printf("equal\n");
       return 0;
}
