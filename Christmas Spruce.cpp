#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> t(n),deg(n);

    for(int i=1;i<n;i++){
        cin>>t[i];
        t[i]--;
        deg[t[i]]++;
    }

    vector<int> child(n);
    for(int i=0;i<n;i++){
        if(deg[i]==0){
            child[t[i]]++;
        }
    }

    for(int i=0;i<n;i++){
        if(deg[i]>0 && child[i]<3){
            cout<<"No";
            return 0;
        }
    }

    cout<<"Yes";
    return 0;
}
