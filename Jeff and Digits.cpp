#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,cnt0=0;
    cin>>n;
    vector<int> numba;

    while(n--){
        int val;
        cin>>val;
        if(val==0){
            cnt0++;
        }
        else{
            cnt++;
        }
    }


    if(cnt0==0){
        cout<<"-1";
    }
    else if(cnt%9!=0 && cnt0>0 && cnt<9){
        cout<<"0";
    }
    else if(cnt>=9 && cnt0>0){
        cnt=cnt-cnt%9;
        while(cnt--){
            numba.push_back(5);
        }
        while(cnt0--){
            numba.push_back(0);
        }
    }
    else{
        cout<<"0";
    }

    for(auto i=numba.begin();i!=numba.end();i++){
        cout<<*i;
    }

    return 0;
}
