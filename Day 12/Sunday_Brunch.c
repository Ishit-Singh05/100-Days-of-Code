#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int x,y;
        scanf("%d %d",&x,&y);
        int a=x/y;
        if (a>=20){
            printf("20\n");
        }
        else{
            printf("%d\n",a);
        }
    }
}

