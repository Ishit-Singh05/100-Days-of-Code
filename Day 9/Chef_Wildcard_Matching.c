#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        char x[11],y[11];
        scanf("%s %s",x,y);
        int len=strlen(x);
        int count=1;
        for(int i=0;i<len;++i){
            if (x[i]==y[i] ||x[i]=='?' || y[i]=='?'){
                count=1;
            }
            else if (x[i]!=y[i] &&x[i]!='?' && y[i]!='?'){
                count=0;
                break;
            }
        }
        if (count){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

}

