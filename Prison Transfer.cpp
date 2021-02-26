#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,t,c;
    cin>>n>>t>>c;

    long long int a[n],intrcnt=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]<=t && intrcnt<c-1){
            intrcnt++;
        }
        else if(a[i]<=t && intrcnt>=c-1){
            cnt++;
            intrcnt++;
        }
        else{
            intrcnt=0;
        }
    }

    cout<<cnt;
    return 0;
}
