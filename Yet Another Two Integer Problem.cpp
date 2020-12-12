#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,cnt;
    cin>>n;
    vector<long long int> num;
    k=n;

    while(n--){
        long long int x,y,d;
        cin>>x>>y;
        cnt=0;
        d=abs(x-y);
        d=(d+9)/10;
        num.push_back(d);
    }

    for(int i=0;i<k;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
