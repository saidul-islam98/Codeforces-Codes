#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    map<long long int,long long int> x;
    long long int sum=0;

    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        x[a]=b;
    }

    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        long long int a,b;
        cin>>a>>b;
        if(x[a]<b){
            x[a]=b;
        }
    }

    for(auto a=x.begin();a!=x.end();a++){
        sum+=(a->second);
    }

    cout<<sum;
    return 0;
}
