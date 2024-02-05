#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;++i){
        int x,y,z;
        scanf("%d %d",&x,&y);
        if(x<=y){
            z=y-x;
            int c=x+z*2;
            printf("%d\n",c);
        }
        else{
            printf("%d\n",y);
        }
    }
}
