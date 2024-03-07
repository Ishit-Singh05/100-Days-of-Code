void numberCrown(int n) {
    // Write your code here.
    int spaces=2*n-2;
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }

        //numbers
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }

        cout<<endl;
        spaces-=2;
    }
}
