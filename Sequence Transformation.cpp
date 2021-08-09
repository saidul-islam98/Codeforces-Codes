#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        set<int> x;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x.insert(a[i]);
        }

        vector<int> vc;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1] && i+1<n){
                vc.push_back(a[i]);
            }
        }
        vc.push_back(a[n-1]);
//        for(int i=0;i<vc.size();i++){
//            cout<<vc[i]<<' ';
//        }
//
//        cout<<'\n';
        vector<int> v(n+1,1);

        int mn=1e8;
        for(int i=0;i<vc.size();i++){
            v[vc[i]]++;
        }

        v[vc[0]]--;
        v[vc[vc.size()-1]]--;

        for(int i=0;i<vc.size();i++){
            if(v[vc[i]]<mn){
                mn=v[vc[i]];
            }
        }
        cout<<mn<<'\n';
    }

    return 0;
}
