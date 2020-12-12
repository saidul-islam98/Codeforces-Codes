#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cap=-9999, total=0;
    cin>>n;
    int pass[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>pass[i][j];
            if(j==0){
                total=total-pass[i][j];
            }
            else{
                total=total+pass[i][j];
                if(total>cap){
                    cap=total;
                }
            }
        }
    }
    cout<<cap;
    return 0;
}
