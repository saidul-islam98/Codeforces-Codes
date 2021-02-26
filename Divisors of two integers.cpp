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

    int x=a[n-1],y=0;
    for(int i=n-2;i>=0;i--){
        if(x%a[i]!=0){
            y=a[i];
            break;
        }
        else if(x%a[i]==0 && a[i]==a[i-1]){
            y=a[i];
            break;
        }
        else if(x%a[i]==0 && a[i]==a[i+1]){
            y=a[i];
            break;
        }
    }

    cout<<x<<' '<<y;
    return 0;
}
