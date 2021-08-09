#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s,st;
        cin>>s>>st;

        if(st.length()<s.length()){
            cout<<"NO\n";
        }
        else{
            int i,j=0;
            bool found=false;
            for(i=0;st[i];i++){
                if(st[i]==s[j]){
                    //cout<<i<<' '<<j<<'\n';
                    j++;
                }
                else if(st[i]!=st[i-1]){
                    found=false;
                    break;
                }
            }

            if(s[j]=='\0' && st[i]=='\0'){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
