#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[5005]={0},mx=-99999999;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
        if(mx<x){
            mx=x;
        }
    }

    for(int i=0;i<5005;i++){
        if(a[i]==0){
            a[i]=-10;
        }
    }

    vector<int> v1,v2;
    for(int i=5004;i>=0;i--){
        if(a[i]>0){
            a[i]--;
            v1.push_back(i);
        }
    }
    for(int i=0;i<5005;i++){
        if(a[i]>0 && i!=mx){
            a[i]--;
            v2.push_back(i);
        }
    }

    cout<<v1.size()+v2.size()<<'\n';

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<' ';
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<' ';
    }
    return 0;
}
