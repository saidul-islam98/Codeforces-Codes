#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,numstr=1;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> v;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            v.push_back(numstr);
            numstr=1;
        }
        else{
            numstr++;
        }
    }

    v.push_back(numstr);
    cout<<cnt<<'\n';
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    return 0;
}
