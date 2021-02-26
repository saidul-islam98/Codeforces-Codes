#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int a[n],avg;
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    avg=round(sum/n);
    if(avg==5){
        cout<<cnt;
    }
    else{
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int x=5-a[i];
            sum+=x;
            avg=round(sum/n);
            cnt++;
            if(avg==5){
                break;
            }
        }
        cout<<cnt;
    }
    return 0;
}
