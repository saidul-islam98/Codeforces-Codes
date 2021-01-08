#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,o,i=1;
    cin>>n;

    k=n/2+1;

    for(int c=1;c<=n;c++){
        string s;
        if(c==k){
            int z=n;
            while(z--){
                s+='D';
            }
            cout<<s<<'\n';
        }
        else if(c<k){
            o=2*i-1;
            int z=(n-o)/2;
            for(int i=0;i<z;i++){
                s+='*';
            }
            for(int i=0;i<o;i++){
                s+='D';
            }
            for(int i=0;i<z;i++){
                s+='*';
            }
            cout<<s<<'\n';
            i++;
        }
        else{
            i--;
            o=2*i-1;
            int z=(n-o)/2;
            for(int i=0;i<z;i++){
                s+='*';
            }
            for(int i=0;i<o;i++){
                s+='D';
            }
            for(int i=0;i<z;i++){
                s+='*';
            }
            cout<<s<<'\n';
        }
    }
    return 0;
}
