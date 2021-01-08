#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        int c[27];
        for(int i=1;i<27;i++){
            c[i]=97+i-1;
        }
        string s="";
        int k=1;
        while(n--){
            s+=char(c[k]);
            k++;
            if(k>b)
                k=1;
        }
        cout<<s<<'\n';
    }
    return 0;
}
