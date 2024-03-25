#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    int sum=a+b,dif=a-b;;
   float sumf=c+d,difs=c-d;
   
   printf("%d %d\n",sum,dif);
   printf("%.1f %.1f\n",sumf,difs);
    
    return 0;
}
