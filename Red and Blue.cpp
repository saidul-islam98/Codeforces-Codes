#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n;

        vector<int> r,b;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            r.push_back(x);
        }

        cin>>m;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }

        partial_sum(r.begin(),r.end(),r.begin());
        partial_sum(b.begin(),b.end(),b.begin());


        int mx=max(0,*max_element(r.begin(),r.end()))+max(0,*max_element(b.begin(),b.end()));

        cout<<mx<<'\n';
    }

    return 0;
}
