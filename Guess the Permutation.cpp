#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[1007]={0};
    vector<int> v;
    int mx;
    for(int i=0;i<n;i++){
        mx=-1;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            mx=max(mx,x);
        }
        v.push_back(mx+a[mx]);
        a[mx]=1;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}
