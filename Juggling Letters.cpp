#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,c[26]={0},k;
        cin>>n;
        k=n;
        while(k--){
            string s;
            cin>>s;
            for(int i=0;i<s.length();i++){
                int x;
                x=int(s[i])-97;
                c[x]++;
            }
        }
        bool flag=false;
        for(int i=0;i<26;i++){
            if(c[i]>0 && c[i]%n!=0){
                flag=true;
                break;
            }
        }

        if(flag==true){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
