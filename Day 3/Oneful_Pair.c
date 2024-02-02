#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c,d;
    c=a+b;
    d=a*b;
    if(c+d==111){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
