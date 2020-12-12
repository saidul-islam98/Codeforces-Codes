#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sc1=0,sc2=0;
    cin>>n;
    string t1,t2,tmp;
    cin>>t1;
    sc1+=1;
    n--;
    while(n--){
        cin>>tmp;
        if(t1==tmp){
            sc1++;
        }
        else{
            t2=tmp;
            sc2++;
        }
    }

    if(sc1>sc2){
        cout<<t1;
    }
    else{
        cout<<t2;
    }

    return 0;
}
