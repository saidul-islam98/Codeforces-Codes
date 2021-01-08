#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    int t;
    cin>>t;

    int sum[s.length()];
    memset(sum,0,sizeof(sum));
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1])
            sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1];
    }

    while(t--){
        int x,y,cnt=0;
        cin>>x>>y;

        cout<<sum[y-1]-sum[x-1]<<'\n';
    }
    return 0;
}
