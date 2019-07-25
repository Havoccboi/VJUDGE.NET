#include<iostream>
using namespace std;
int main(int argc , char** argv){
    int t;
    cin>>t;
    int cs=1;
    while(t--){
        int a,b;
        int i;
        cin>>a>>b;
        if(a%2 == 0)
            i=a+1;
        else i=a;
        int sum=0;
        while(i<=b){
            sum+=i;
            i+=2;
        }
        cout<<"Case "<<cs<<": "<<sum<<endl;
        cs++;
    }
}
