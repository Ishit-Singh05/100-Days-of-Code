#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;++i){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if (x!=y && y!=z && z!=x){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
