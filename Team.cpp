#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int prob[n][3];
    int cnt, res=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>prob[i][j];
        }
    }

    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<3;j++){
            if(prob[i][j]==1){
                cnt++;
            }
        }
        if(cnt>1){
            res++;
        }
    }

    cout<<res;

    return 0;
}

