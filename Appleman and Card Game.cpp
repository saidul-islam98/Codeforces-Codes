#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,j=0,c[26];
    long long int cnt=0;
    cin>>n>>k;

    memset(c,0,sizeof(c));
    bool flag=false;

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int val;
        val=int(s[i])-65;
        c[val]++;
    }

    sort(c,c+26,greater<int>());

    while(1){
        if(k-c[j]>=0){
            cnt+=pow(c[j],2);
            k=k-c[j];
            j++;
        }
        else{
            break;
        }
    }

    if(k>0){
        cnt+=pow(k,2);
    }
    cout<<cnt;
    return 0;
}
