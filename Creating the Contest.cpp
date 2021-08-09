#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n],b[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int cnt=0,curr=0;
    for(int i=n-1;i>0;i--){
        if(a[i]<=a[i-1]*2){
            cnt++;
        }
        else{
            b[i]=cnt+1;
            curr=cnt+1;
            cnt=0;
        }
    }

    b[0]=cnt+1;

//    for(int i=0;i<n;i++){
//        cout<<b[i]<<' ';
//    }
//    cout<<'\n';

    int res=*max_element(b,b+n);
    if(cnt>res)
        cout<<cnt+1;
    else
        cout<<res;

    return 0;
}
