#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int b[105]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b[x]++;
    }

    int mx=-99999;
    for(int i=0;i<105;i++){
        if(b[i]>mx){
            mx=b[i];
        }
    }

    cout<<mx;
    return 0;
}
