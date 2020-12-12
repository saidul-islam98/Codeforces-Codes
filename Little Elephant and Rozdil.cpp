#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,i=0,mn=999999999999,out;
    cin>>n;
    vector<long long int> numba,pos;
    int flag=0, cnt;

    while(n--){
        i++;
        long long int val;
        cin>>val;
        if(val<mn){
            mn=val;
            numba.push_back(i);
            flag=0;
        }
        else if(val==mn){
            flag=1;
        }
    }

    if(flag==0){
        out=numba.back();
        cout<<out;
    }
    else{
        cout<<"Still Rozdil";
    }

    return 0;
}
