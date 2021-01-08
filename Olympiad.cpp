#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,t;
    cin>>n;

    t=n;
    int a[605]={0};

    while(t--){
        int x;
        cin>>x;
        a[x]++;
    }

    for(int i=1;i<605;i++){
        if(a[i]>0){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}
