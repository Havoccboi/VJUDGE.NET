#include<iostream>
using namespace std;
int main () 
{
    int array [] = {1,64,729,4096,15625,46656,117649,262144,531441,1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000, 85766121};
int n;
while(cin>>n && n)
{
    bool p = false;
  for(int i=0;i<21;i++){
    if(n == array[i]){
        cout<<"Special"<<endl;
        p=true;
    }
  }
  if(!p) cout<<"Ordinary"<<endl;  
}

}
