#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    long long int cnt=0;
    if(s.length()==1){
        cout<<0;
    }
    else{
        while(s.length()>1){
            long long int x=0;
            for(int i=0;i<s.length();i++){
                x+=(int(s[i])-48);
            }
            cnt++;
            s=to_string(x);
        }
        cout<<cnt;
    }
    return 0;
}
