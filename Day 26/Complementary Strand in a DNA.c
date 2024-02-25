#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",&s);
	    for(int i=0;i<n;++i){
	        if(s[i]=='A'){
	            s[i]='T';
	        }
	        else if(s[i]=='T'){
	            s[i]='A';
	        }
	        else if(s[i]=='C'){
	            s[i]='G';
	        }
	        else if(s[i]=='G'){
	            s[i]='C';
	        }
	    }
	    printf("%s\n",s);
	}

}

