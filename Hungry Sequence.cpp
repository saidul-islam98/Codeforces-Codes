#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int i=0,k=n;
    vector<long long int> v;
    while(n--){
        v.push_back(3*k+i);
        i++;
    }

    for(auto j=v.begin();j!=v.end();j++){
        cout<<*j<<" ";
    }
    return 0;
}
