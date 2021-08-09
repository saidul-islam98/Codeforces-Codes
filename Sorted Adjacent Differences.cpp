#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        int k=n/2;
        vector<long long int> v;
        if(n%2==1){
            v.push_back(a[k]);
        }

        for(int i=k-1;i>=0;i--){
            v.push_back(a[n-i-1]);
            v.push_back(a[i]);
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
