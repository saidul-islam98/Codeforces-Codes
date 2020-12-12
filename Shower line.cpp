#include<bits/stdc++.h>

using namespace std;

long long int hp[6][6];

int main(){
    int tmp, mx=-9999;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>hp[i][j];
        }
    }

    int a[6];
    for(int i=0;i<5;i++){
        a[i]=i;
    }

    do{
        tmp=hp[a[0]][a[1]]+hp[a[1]][a[0]];
        tmp+=hp[a[2]][a[3]]+hp[a[3]][a[2]];

        tmp+=hp[a[1]][a[2]]+hp[a[2]][a[1]];
        tmp+=hp[a[3]][a[4]]+hp[a[4]][a[3]];

        tmp+=hp[a[2]][a[3]]+hp[a[3]][a[2]];

        tmp+=hp[a[3]][a[4]]+hp[a[4]][a[3]];

        if(tmp>mx){
            mx=tmp;
        }

    }while(next_permutation(a, a+5));

    cout<<mx;

    return 0;

}

