#include <math.h>
int* printDivisors(int n, int &size){
// Write your code here
for(int i=1;i<=n;i++){
  if (n % i == 0) {
    cout << i << " ";
  }
}
}
