#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    if(n==2){
        cout<<0;
    }
    else{
         int instb1=a[n-2]-a[0];
         int instb2=a[n-1]-a[1];
         int fn=min(instb1,instb2);
         cout<<fn;
    }

    return 0;
}
