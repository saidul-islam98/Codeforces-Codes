#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n+1],cnt=0;
    a[0]=-99999999999;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a,a+n+1);

    for(int i=1;i<=n;i++){
        if(a[i]>=0){
            cnt=cnt+abs(i-a[i]);
        }
        else{
            cnt=cnt+(i+abs(a[i]));
        }
    }

    cout<<cnt;
    return 0;
}
