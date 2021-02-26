#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    if(n==1){
        cout<<0<<'\n'<<a[0];
    }
    else if(n==2){
        cout<<0<<'\n'<<a[0]<<' '<<a[1]<<'\n';
    }
    else{
        if(n%2==0){
            int k=n/2-1,c=k,d=0;
            cout<<k<<'\n';
            while(1){
                cout<<a[k]<<' ';
                if(d<c){
                    cout<<a[d]<<' ';
                    d++;
                }
                k++;
                if(k==n)
                    break;
            }
        }
        else{
            int k=n/2,c=k,d=0;
            cout<<k<<'\n';
            while(1){
                cout<<a[k]<<' ';
                if(d<c){
                    cout<<a[d]<<' ';
                    d++;
                }
                k++;
                if(k==n)
                    break;
            }
        }
    }
    return 0;
}
