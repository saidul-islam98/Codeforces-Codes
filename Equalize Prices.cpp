#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        long long int a[n],intrmx;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long int mn=*min_element(a,a+n);
        long long int mx=*max_element(a,a+n);

        intrmx=mn+k;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(abs(a[i]-intrmx)>k){
                flag=false;
                break;
            }
        }

        if(flag==true){
            cout<<intrmx<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}
