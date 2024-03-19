#include <math.h>
bool checkArmstrong(int n){
	int count=0;
	int original=n;
	int temp=n;
	while(temp>0){
		count++;
		temp=temp/10;
	}
	int sum=0;
	while(n>0){
		int last=n%10;
		sum+=pow(last,count);
		n=n/10;
	}
	if(sum==original) return true;
	else return false;
}
