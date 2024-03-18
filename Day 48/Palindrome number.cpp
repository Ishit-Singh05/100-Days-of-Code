bool palindrome(int n)
{
    int reverse=0;
    int original =n;
    while(n>0){
        int last=n%10;
        reverse=(reverse*10)+last;
        n=n/10;
    }
    if(original==reverse) return true;
    else return false;
}
