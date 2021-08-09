#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    char c[k];

    bool present[256];
    memset(present,false,sizeof(present));

    for(int i=0;i<k;i++){
        cin>>c[i];
        present[c[i]]=true;
    }

    for(int i=0;i<256;i++){
        cout<<present[i]<<' ';
    }

    long long int curr=0,res=0;

    for(int i=0;i<n;i++){
        if(present[s[i]]){
            curr++;
            res+=curr;
        }
        else{
            curr=0;
        }
    }

    cout<<res;
    return 0;
}
