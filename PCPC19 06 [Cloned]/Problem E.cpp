#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> my;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a; i<=b;i++)
            my.insert(i);
    }
    cout<<my.size();
}
