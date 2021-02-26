#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<long long int> v;

    long long int res;
    for(int i=0;i<n;i++){
        long long int mn=99999999999;
        for(int j=0;j<m;j++){
            long long int x;
            cin>>x;
            if(mn>x){
                mn=x;
            }
        }
        v.push_back(mn);
    }

    if(n==1){
        res=*min_element(v.begin(),v.end());
    }
    else{
        res=*max_element(v.begin(),v.end());
    }

    cout<<res;
    return 0;
}
