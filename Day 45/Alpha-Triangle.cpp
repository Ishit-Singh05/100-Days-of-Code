void alphaTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        // char ch='A'+n-1;
        for(char ch='A'+n-1;ch>'A'+(n-i-2);ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
