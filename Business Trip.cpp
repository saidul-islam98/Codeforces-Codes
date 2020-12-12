#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m=12,val,mon=0,cnt=0;
    vector<int> numba;

    cin>>n;

    if(n==0){
        for(int i=0;i<12;i++){
            cin>>val;
            numba.push_back(val);
        }
        cout<<"0";
    }
    else{
        for(int i=0;i<12;i++){
            cin>>val;
            numba.push_back(val);
        }

        sort(numba.begin(), numba.end(), greater<int>());
        for(auto i=numba.begin();i!=numba.end();i++){
            mon=mon+(int)*i;
            if(mon>=n){
                cnt++;
                break;
            }
            else{
                cnt++;
            }
        }
        if(mon>=n){
            cout<<cnt;
        }
        else{
            cout<<"-1";
        }

    }
    return 0;
}
