void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        } 
        cout<<endl;
    }
}
