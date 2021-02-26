#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[200005];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        if(a[i]%2){
            if(i==n || a[i+1]==0){
                cout<<"NO";
                return 0;
            }
            a[i+1]--;
        }
    }
    cout<<"YES";
    return 0;
}
