#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int a[26]={0},cnt=0;
        for(int i=0;i<s.length();i++){
            int x=int(s[i])-97;
            a[x]++;
        }

        for(int i=0;i<26;i++){
            if(a[i]>0){
                cnt++;
            }
        }


        if(s.length()==1 || (s.length()==2 && s[0]==s[1]) || cnt==1){
            cout<<-1<<'\n';
        }
        else{
            string st="";
            for(int i=0;i<26;i++){
                if(a[i]>0){
                    while(a[i]--){
                        st+=char(i+97);
                    }
                }
            }

            cout<<st<<'\n';
        }
    }
    return 0;
}
