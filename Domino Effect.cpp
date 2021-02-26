#include<bits/stdc++.h>

using namespace std;

int main(){
    int res=0,n,cnt=0;
    char ch='#';
    string s;
    cin>>n>>s;

    while(n--){
        if(s[n]=='.'){
            cnt++;
        }
        else if(s[n]=='L'){
            res+=cnt;
            cnt=0;
            ch=s[n];
        }
        else{
            if(ch=='L'){
                res+=cnt%2;
            }
            ch=s[n];
            cnt=0;
        }
    }
    if(ch!='L'){
        res+=cnt;
    }

    cout<<res;
    return 0;
}
