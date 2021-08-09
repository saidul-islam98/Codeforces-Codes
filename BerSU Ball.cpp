#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    int cnt=0;
    for(int i=0,j=0;i<n && j<m;){
        if(a[i]-1>b[j])
            j++;
        else if(a[i]<b[j]-1)
            i++;
        else
            cnt++,i++,j++;
    }


    cout<<cnt;
    return 0;
}
