#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        string s;
        cin>>s;

        for(int i=0;i<n;i++){
            v.push_back(int(s[i])-48);
        }

        bool yes=true;
        for(int i=0;i<n-1;i++){
            if(v[i]<=v[i+1]){
                continue;
            }
            else{
                yes=false;
                break;
            }
        }

        if(yes){
            cout<<s;
        }
        else{
            bool frnt=false,bck=false;
            string fs="",bs="";
            for(int i=0,j=n-1;i<v.size();i++,j--){
                if(v[i]==0 && frnt==false){
                    fs+='0';
                }
                else{
                    frnt=true;
                }
                if(v[j]==1 && bck==false){
                    bs+='1';
                }
                else{
                    bck=true;
                }
            }
            fs+='0';
            cout<<fs+bs;
        }

        cout<<'\n';
    }
    return 0;
}
