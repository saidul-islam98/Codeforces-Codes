#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,mx=-9999999, cnt=0;
    cin>>n;

    int fpd[n];
    for(int i=0;i<n;i++){
        cin>>fpd[i];
    }

    cin>>m;
    int rpd[m];

    for(int i=0;i<m;i++){
        cin>>rpd[i];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rpd[i]%fpd[j]==0){
                if((rpd[i]/fpd[j])>mx){
                    mx=(rpd[i]/fpd[j]);
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rpd[i]%fpd[j]==0){
                if((rpd[i]/fpd[j])==mx){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt;

    return 0;
}
