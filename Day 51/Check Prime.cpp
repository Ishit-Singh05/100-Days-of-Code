#include<iostream>
using namespace std;


int main() {
	// Write your code here
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"true";
			}
	else{
		cout<<"false";
	}
	
}
