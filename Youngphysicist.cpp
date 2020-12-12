#include<bits/stdc++.h>

using namespace std;

int physicist(int x[], int y[], int z[], int n){
    int flag;
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++){
        sum1=sum1+x[i];
        sum2=sum2+y[i];
        sum3=sum3+z[i];
    }
    if(sum1==0 && sum2==0 && sum3==0){
        return flag=1;
    }
    else{
        return flag=0;
    }
}

int main(){
    int n;
    int x[100],y[100],z[100];
    int flag;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }

    flag=physicist(x,y,z,n);

    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
