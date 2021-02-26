#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[200005]={0};
    int n;
    cin>>n;

    int b[n+1];
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }

    for(int i=1;i<=n;i++){
        a[b[i]]=i;
    }

    int mn=99999999,idx;
    for(int i=0;i<200005;i++){
        if(a[i]>0){
            if(mn>a[i]){
                mn=a[i];
            }
        }
    }

    for(int i=0;i<200005;i++){
        if(a[i]==mn){
            idx=i;
            break;
        }
    }

    cout<<idx;
    return 0;
}
