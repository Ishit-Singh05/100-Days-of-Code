void symmetry(int n) {
    // Write your code here.
    int spaces=0;
    for(int i=0;i<n;i++){
        //upper half
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=0;j<spaces;j++){
            cout<<"  ";
        }

        //stars
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        spaces += 2;
        cout << endl;
    }
        //lower half
        int space=2*n-2;
        for(int i=0;i<n;i++){
            //stars
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        
         space-=2;
        cout<<endl;
        }
}
