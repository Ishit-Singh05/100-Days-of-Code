#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char c,ch[100],sen[100];
scanf("%c",&c);
scanf("%s",ch);
scanf("%[^\f]s", sen);

printf("%c\n",c);
printf("%s",ch);
printf("%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
