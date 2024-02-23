#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        }
	        int b=a[0];
	        for(int i=0;i<n;i++){
	            if(b<a[i]){
	                b=a[i];
	            }
	        }
	          printf("%d\n",b);
	}

}


