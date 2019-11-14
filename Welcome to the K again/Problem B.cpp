hi#include<iostream>
using namespace std;
bool isPalindrome(int n) 
{
long long int divisor = 1; 
    while (n / divisor >= 10) 
        divisor *= 10; 
  
    while (n != 0) 
    { 
        long long int leading = n / divisor;  
        long long int trailing = n % 10; 
  
        
        if (leading != trailing)   
            return false; 
        n = (n % divisor) / 10; 
        divisor = divisor / 100; 
    } 
    return true; 
}

long long int  reverse(int n){
     long long int rev=0;
        long long int q=n;
        while(q!=0){
            rev= (rev*10) + (q%10);
            q/=10;
        }
        return rev;
}
int main () {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
       
        int cs=0;
        bool f = false;
        while(!f){

            long long int q=reverse(n);
            long long int  r = q+n;
            f = isPalindrome(r);
            n=r;
            cs++;
        }

        cout<<cs<<" "<<n<<endl;

    }




    return 0;
}
//padding0
