#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    long long int n=s.length();
    int k;
    cin>>k;

    if(n<k){
        cout<<n-1;
    }
    else{
        int dcnt=0,zcnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!='0'){
                dcnt++;
            }
            else if(s[i]=='0'){
                zcnt++;
                if(zcnt==k){
                    break;
                }
            }
        }
        if(zcnt<k)
            dcnt=n-1;
        cout<<dcnt;
    }
    return 0;
}
