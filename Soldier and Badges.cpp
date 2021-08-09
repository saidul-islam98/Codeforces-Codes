#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bool sortable=true;
    int idx=1,coins=0;
    while(sortable){
        if(sortable){
            sort(a,a+n);
        }
        sortable=false;
        for(int i=idx;i<n;i++){
            if(a[i]<=a[i-1]){
                coins+=(a[i-1]-a[i]+1);
                a[i]=a[i-1]+1;
                idx=i;
                sortable=true;
            }
        }
    }

    cout<<coins;
    return 0;
}
