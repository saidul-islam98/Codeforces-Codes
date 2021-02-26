#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,cnt=0;
        cin>>n;

        string s;
        cin>>s;

        if(s.length()==2){
            if((s[0]==s[1]) || (s[0]>s[1])){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n"<<2<<'\n'<<s[0]<<' '<<s[1]<<'\n';
            }
        }
        else{
            vector<int> v;
            for(int i=0;i<s.length();i++){
                int x=int(s[i])-48;
                v.push_back(x);
            }

            cout<<"YES\n"<<2<<'\n';
            cout<<v[0]<<' ';
            for(int i=1;i<v.size();i++){
                cout<<v[i];
            }
            cout<<'\n';
        }

    }
    return 0;
}
