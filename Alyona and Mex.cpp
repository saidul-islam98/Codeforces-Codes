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

    int curr=1;
    for(int i=0;i<n;i++){
        if(a[i]>=curr){
            curr++;
        }
    }

    cout<<curr;
    return 0;
}
