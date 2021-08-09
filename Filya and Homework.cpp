#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long int mx=*max_element(a,a+n);
    long long int mn=*min_element(a,a+n);
    long long int mean;

    if((mx+mn)%2==0){
        mean=(mx+mn)/2;
    }
    else{
        mean=-1;
    }

    bool possible=true;
    for(int i=0;i<n;i++){
        if(a[i]!=mn && a[i]!=mx){
            if(a[i]!=mean){
                possible=false;
                break;
            }
        }
    }

    if(possible){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
