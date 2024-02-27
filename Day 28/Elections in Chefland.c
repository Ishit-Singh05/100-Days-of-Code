#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int n,x,count=0;
        scanf("%d %d",&n,&x);
        for(int i=0;i<n;i++){
            int age;
            scanf("%d",&age);
            if (age>=x){
                count++;
            }
            
        }
        printf("%d\n",count);
    }
}

