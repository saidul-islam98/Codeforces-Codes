#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long int curr;
    sum+=a[n-1];
    curr=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>=curr){
            a[i]=curr-1;
            if(a[i]>0){
                sum+=a[i];
                curr=a[i];
            }
            else{
                a[i]=0;
                curr=a[i];
            }
        }
        else{
            sum+=a[i];
            curr=a[i];
        }
    }

    cout<<sum;
    return 0;
}
