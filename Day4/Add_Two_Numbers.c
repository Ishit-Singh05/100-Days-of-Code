#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i,a,b;
    for(i=0;i<t;++i){
        scanf("%d",&a);
        scanf("%d",&b);
        int sum=a+b;
        printf("%d\n",sum);
    }
}
