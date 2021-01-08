#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,s;
    cin>>n>>m;
    s=m;
    int a[n],cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int k=0;
    while(s>0){
        s-=a[k];
        k++;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
