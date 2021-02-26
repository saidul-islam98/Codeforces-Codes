#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    int n;
    cin>>n;

    int a[26];
    for(int i=0;i<26;i++){
        cin>>a[i];
    }

    int mx=*max_element(a,a+26);
    char c;
    for(int i=0;i<26;i++){
        if(a[i]==mx){
            c=char(i+97);
            break;
        }
    }
    while(n--){
        s+=c;
    }

    int sum=0;
    for(int i=0;i<s.length();i++){
        int x=int(s[i])-97;
        int y=a[x];
        sum+=((i+1)*y);
    }

    cout<<sum;
    return 0;
}
