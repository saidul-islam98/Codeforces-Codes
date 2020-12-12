#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(1){
        vector <int> numba;
        int tmp1,tmp2;
        int div=1000;
        n++;
        tmp2=n;
        for(int i=0;i<4;i++){
            tmp1=tmp2/div;
            tmp2=tmp2%div;
            numba.push_back(tmp1);
            div=div/10;
        }
        if((numba[0]!=numba[1]) && (numba[0]!=numba[2]) && (numba[0]!=numba[3]) && (numba[1]!=numba[2]) && (numba[1]!=numba[3]) && (numba[2]!=numba[3])){
            cout<<n;
            break;
        }
    }
    return 0;
}
