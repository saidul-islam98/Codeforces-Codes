#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,cnt=0,num=0;
    cin>>n;
    bool flag=false;

    while(n--){
        int val;
        cin>>val;
        if(val==-1 && flag==false){
            cnt++;
        }
        else{
            flag=true;
            num+=val;
            if(num==0){
                flag=false;
            }
        }
    }

    cout<<cnt;
    return 0;
}
