#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    string s,st;
    cin>>s>>st;

    vector<int> fv,tmpv;

    for(int i=0;i<n;i++){
        fv.push_back(i+1);
    }

    for(int i=0;i<m-n+1;i++){
        tmpv.clear();
        for(int j=0;j<n;j++){
            if(s[j]!=st[i+j]){
                tmpv.push_back(j+1);
            }
        }
        if(tmpv.size()<fv.size()){
            fv=tmpv;
        }
    }

    cout<<fv.size()<<'\n';
    for(int i=0;i<fv.size();i++){
        cout<<fv[i]<<' ';
    }
    return 0;
}
