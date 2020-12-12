#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long int> v;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                continue;
            }
            else{
                v.push_back(a[i]);
            }
        }

        cout<<v.size()+1<<'\n';
    }
    return 0;
}
