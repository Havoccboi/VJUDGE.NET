#include<iostream>
#include<set>
using namespace std;
int main ()
{
    int n,city;
    cin>>n;
    string names;

    while(n--){
        cin>>city;
        set<string>cities;
        while(city--) {
            cin >> names;
            cities.insert(names);
        }
        cout<<cities.size()<<endl;
    }


    return 0;
}
