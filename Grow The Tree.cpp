#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    long long int a[n],total;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    if(n==1){
        total=pow(abs(0-a[0]),2)+pow(abs(0-0),2);
    }
    else{
        int x=0,y=0;
        for(int i=n-1,j=0;j<=i;i--,j++){
            if(j==i && n%2!=0){
                x+=a[i];
            }
            else{
                x+=a[i];
                y+=a[j];
            }
        }
        total=pow(abs(0-x),2)+pow(abs(0-y),2);
    }

    cout<<total;
    return 0;
}
