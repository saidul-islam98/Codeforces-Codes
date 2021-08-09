#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(x>y){
        cout<<n;
    }
    else{
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]<=x){
                cnt++;
            }
        }

        cout<<(cnt+1)/2;
    }

    return 0;
}
