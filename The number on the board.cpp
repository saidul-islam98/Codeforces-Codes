#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int k,sum=0;
    cin>>k;
    string s;
    cin>>s;

    int n=s.length();
    int dig[9]={0};
    for(int i=0;i<n;i++){
        int x=int(s[i])-48;
        dig[x]++;
        sum+=x;
    }

    if(sum>=k){
        cout<<0;
    }
    else{
        int cnt=0;
        for(int i=0;i<9;i++){
            for(int j=0;j<dig[i];j++) {
                if(sum<k) {
                    cnt++;
                    sum+=9-i;
                }
            }
        }
        cout<<cnt;
    }
    return 0;
}
