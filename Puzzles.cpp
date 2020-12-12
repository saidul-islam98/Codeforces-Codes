#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,val,mn=99999;
    cin>>n>>m;
    int puzz[m];

    for(int i=0;i<m;i++){
        cin>>puzz[i];
    }

    sort(puzz, puzz+m);

    for(int i=0;i<m;i++){
        if((puzz[i+n-1]-puzz[i])<mn && (i+n-1)<m){
            mn=puzz[i+n-1]-puzz[i];
        }
    }
    cout<<mn;

    return 0;
}
