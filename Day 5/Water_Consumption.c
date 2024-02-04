#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i,a;
    for(i=0;i<t;++i){
        scanf("%d",&a);
        if(a>=2000){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
   

}
