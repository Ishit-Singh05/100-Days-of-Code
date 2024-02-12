#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int x;
        scanf("%d",&x);
        for(int i=0;i<x;++i){
            if(x%3==0){
                printf("Normal\n");
                break;
            }
             else if(x%3==1){
                printf("Huge\n");
                break;
            }
            else if(x%3==2){
                printf("Small\n");
                break;
            }
        }
        
    }
}

