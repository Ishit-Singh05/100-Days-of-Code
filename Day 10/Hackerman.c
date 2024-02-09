#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int a,b,c,flag=0;
        scanf("%d %d",&a,&b);
        c=a+b;
        if(c==1){
            flag=1;
        }
        else if(c>1){
            for(int i=2;i<c;++i){
                if (c%i==0){
                    flag=1;
                    break;
                }
                else{
                    flag=0;
                }
            }
        }
        if(flag==1){
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }
    }
}

