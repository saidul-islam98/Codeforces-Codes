#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,ocnt=0,ccnt=0;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                ocnt++;
            }
            else if(s[i]==')' && ocnt==0){
                ccnt++;
            }
            else if(s[i]==')' && ocnt>0){
                ocnt--;
            }
        }

        cout<<ccnt<<'\n';
    }
    return 0;
}
