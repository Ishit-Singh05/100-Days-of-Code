#include <math.h>
int* printDivisors(int n, int &size){
for(int i=1;i<=n;i++){
  if (n % i == 0) {
    cout << i << " ";
  }
}
