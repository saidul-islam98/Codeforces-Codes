#include<bits/stdc++.h>

using namespace std;

void buildtree(int l, int r, int a[], int b[], int curr=0){

    if(r<l){
        return;
    }

    if(l==r){
        b[l]=curr;
        return;
    }

    int k=l;
    for(int i=l+1;i<=r;i++){
        if(a[k]<a[i]){
          k=i;
        }
    }

    b[k]=curr;
    buildtree(l,k-1,a,b,curr+1);
    buildtree(k+1,r,a,b,curr+1);

}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        buildtree(0,n-1,a,b);
        for(int i=0;i<n;i++){
            cout<<b[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
