#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,st;
    cin>>s>>st;

    int mn=min(s.length(),st.length());
    int n=s.length()-1;
    int m=st.length()-1;

    int cnt=0;
    while(mn--){
        if(s[n]==st[m]){
            cnt++;
            n--;
            m--;
        }
        else{
            break;
        }
    }
    cout<<(s.length()+st.length())-2*cnt;
    return 0;
}
