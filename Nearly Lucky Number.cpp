#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    int c4=0, c7=0;
    cin>>n;
    vector<int> numba;
    //cout<<n%10;
    while((n/10)!=0){
        numba.push_back(n%10);
        n=n/10;
    }
    numba.push_back(n%10);

    for(auto i=numba.begin();i!=numba.end();i++){
        if(*i==4){
            c4++;
        }
        else if(*i==7){
            c7++;
        }
        else{
            continue;
        }
    }

    if((c4+c7)==4 || (c4+c7)==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
