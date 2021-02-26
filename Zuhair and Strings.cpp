#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int cnt=0,x,mx=0;
    for(char ch='a';ch<='z';ch++){
        x=0;
        for(int i=0;i<n;i++){
            if(s[i]==ch){
                cnt++;
            }
            else{
                cnt=0;
            }

            if(cnt==k){
                cnt=0;
                x++;
            }
        }
        mx=max(mx,x);
    }

    cout<<mx;
    return 0;
}
