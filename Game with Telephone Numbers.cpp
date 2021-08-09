#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ntd=n-11;
    int val1=ntd/2, val2=ntd/2;
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            if(val1>0){
                val1--;
            }
            else{
                ans+=s[i];
            }
        }
        else{
            if(val2>0){
                val2--;
            }
            else{
                ans+=s[i];
            }
        }
    }


    if(ans[0]=='8'){
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
