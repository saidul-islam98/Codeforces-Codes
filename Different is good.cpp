#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int a[26]={0};

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int x=int(s[i])-97;
        if(a[x]==0){
            a[x]=1;
        }
        else{
            cnt++;
        }
    }

    if(n<=26)
        cout<<cnt;
    else
        cout<<-1;
    return 0;
}
