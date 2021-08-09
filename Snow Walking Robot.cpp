#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int u=0,d=0,l=0,r=0,v,h;
        for(int i=0;i<s.length();i++){
            if(s[i]=='U'){
                u++;
            }
            else if(s[i]=='D'){
                d++;
            }
            else if(s[i]=='L'){
                l++;
            }
            else{
                r++;
            }
        }

        v=min(u,d);
        h=min(l,r);

        if((l+r+u+d)==l || (l+r+u+d)==r || (l+r+u+d)==u || (l+r+u+d)==d){
            cout<<0<<'\n';
        }
        else if(min(v,h)==0){
            if(v==0){
                h=min(h,1);
                cout<<2*h<<'\n';
                cout<<string(h,'L')+string(h,'R')<<'\n';
            }
            else{
                v=min(v,1);
                cout<<2*v<<'\n';
                cout<<string(v,'U')+string(v,'D')<<'\n';
            }
        }
        else{
            string st="";
            st+=string(h,'L');
            st+=string(v,'U');
            st+=string(h,'R');
            st+=string(v,'D');

            cout<<st.length()<<'\n';
            cout<<st<<'\n';
        }
    }
    return 0;
}
