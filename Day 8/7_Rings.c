#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;++i){
        int x,n;
        scanf("%d %d",&x, &n);
        int c=x*n;
        if(c>=10000 && c<=99999){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
