#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int s,x,y,z;
        scanf("%d %d %d %d",&s,&x,&y,&z);
        int a=s-(x+y);
        if(z<=a){
            printf("0\n");
        }
        else{
            if(z<=a+x||z<=a+y){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }
}

