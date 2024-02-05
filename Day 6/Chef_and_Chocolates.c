#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int c=x*5+y*10;
        printf("%d\n",c/z);
    }

}
