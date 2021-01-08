#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;

    while(t--){
        int l,r;
        char c1,c2;
        cin>>l>>r;
        cin>>c1>>c2;

        for(int i=l;i<=r;i++){
            if(s[i-1]==c1){
                s[i-1]=c2;
            }
        }
    }
    cout<<s;
    return 0;
}
