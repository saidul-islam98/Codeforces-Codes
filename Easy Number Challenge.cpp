#include<bits/stdc++.h>

using namespace std;

#define N 1073741824

int divs(int x, int y){
    if(x==1){
        return y;
    }
    y=0;
    int limit=sqrt(x);

    for(int i=1;i<=limit;i++){
        if(x%i==0){
            y+=2;
        }
    }

    if(limit*limit==x){
        y--;
    }
    return y;
}

int main(){
    int a,b,c,mul,sum=0;
    map<int,int> mpp;
    cin>>a>>b>>c;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                mul=i*j*k;
                if(!mpp[mul]){
                    mpp[mul]=divs(mul,1);
                }
                sum=(sum+mpp[mul])%N;
            }
        }
    }

    cout<<sum;
    return 0;
}
