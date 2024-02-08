#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;++i){
        int n;
        scanf("%d",&n);
        char s[n+1],serv='A';
        scanf("%s",s);
        int countA=0,countB=0;
        for(int i=0;i<n;++i){
           if(s[i]=='A' && serv=='A'){
               countA++;
           }
           else if(s[i]=='A' && serv=='B'){
               serv='A';
           }
           else if(s[i]=='B' && serv=='B'){
               countB++;
           }
           else if(s[i]=='B' && serv=='A'){
               serv='B';
           }
            }
        printf("%d %d\n",countA,countB);
    }
    return 0;
}
