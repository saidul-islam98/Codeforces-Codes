#include<bits/stdc++.h>

using namespace std;

int divCount(long long int x){
    int val=2,cnt=0;
    while(x>0){
        if(x%val==0){
            x=x/val;
            cnt++;
        }
        else if(cnt>2){
            break;
        }
        else if((val*val)<=x){
            val++;
        }
        else{
            break;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;

        int cnt=divCount(n);
        if(cnt==2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
