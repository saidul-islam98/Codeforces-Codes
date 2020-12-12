#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,y,k,i=1,sum=0;
    vector<long long int> x;
    cin>>y>>k>>n;

    while((k*i)<=n){
        if(k*i>y){
            x.push_back(k*i);
        }
        i++;
    }

    if(x.size()==0){
        cout<<"-1";
        return 0;
    }
    else{
        for(int i=0;i<x.size();i++){
            cout<<x[i]-y<<" ";
        }
    }

    return 0;
}
