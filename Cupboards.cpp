#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,total,cntl=0,cntr=0,med;
    cin>>n;
    med=(n/2)+1;
    int doors[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>doors[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                if(doors[i][j]==1){
                    cntl++;
                }
            }
            else{
                if(doors[i][j]==1){
                    cntr++;
                }
            }
        }
    }
    if((cntl>=med) && (cntr>=med)){
        total=(n-cntl)+(n-cntr);
    }
    else if((cntl<med) && (cntr>=med)){
        total=cntl+(n-cntr);
    }
    else if((cntl>=med) && (cntr<med)){
        total=(n-cntl)+cntr;
    }
    else{
        total=cntl+cntr;
    }

    cout<<total;
    return 0;
}
