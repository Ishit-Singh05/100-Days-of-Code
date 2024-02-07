#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for(int i=0;i<t;++i){
        int x,n;
        scanf("%d",&x);
        // n=x/2;
        char s[x];
        scanf("%s",s);
        for(int j=0;j<x;j+=2){
            if (s[j]=='0' && s[j+1]=='0'){
                printf("A");
            }
            else if(s[j]=='0' && s[j+1]=='1'){
                printf("T");
            }
            else if (s[j]=='1' && s[j+1]=='0'){
                printf("C");
            }
            else if(s[j]=='1' && s[j+1]=='1'){
                printf("G");
            }
        }
        printf("\n");
    }
    return 0;
}
