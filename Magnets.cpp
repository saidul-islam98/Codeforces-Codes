#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    string s,prev;
    cin>>s;
    prev=s;
    cnt++;
    n--;
    while(n--){
        string ss;
        cin>>ss;
        if(ss!=prev){
            cnt++;
            prev=ss;
        }
    }

    cout<<cnt;
    return 0;
}
