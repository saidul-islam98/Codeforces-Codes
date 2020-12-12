#include<bits/stdc++.h>

using namespace std;


int numberOfTriplets(int x){
    long long int a,b,c=0,cnt=0;

    int m=2;
    while(c<x){
        for(int n=1;n<m;n++){
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>x){
                break;
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
            cnt++;
        }
        m++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;

    int cnt=numberOfTriplets(n);
    cout<<cnt;
    return 0;
}
