#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s="";
        for(int i=0;i<k;i++){
            s+='a';
        }
        int j=0;
        for(int i=1;i<n-k+1;i++){
            if(j+1==i){
                s+='b';
            }
            else if(j+2==i){
                s+='c';
            }
            else if(j+3==i){
                s+='a';
                j+=3;
            }
        }

        cout<<s<<'\n';
    }
    return 0;
}

