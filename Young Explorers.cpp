#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int e[n];
        for(int i=0;i<n;i++){
            cin>>e[i];
        }

        int cnt=0,pos=0;
        sort(e,e+n);
        for(int i=0;i<n;i++){
            if(e[i]<=++pos){
                pos=0;
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
