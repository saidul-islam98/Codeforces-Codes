#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,n1,n2,t1,t2;
    cin>>n>>n1>>n2;

    t1=min(n1,n2);
    if(t1==n1)
        t2=n2;
    else
        t2=n1;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    double avg1=0,avg2=0,cnt1=0,cnt2=0,sum1=0,sum2=0;
    sort(a,a+n);

    int r=n-1;
    bool noH=true;
    while(t1--){
        sum1+=a[r];
        r--;
        cnt1++;
        if(r<0){
            noH=false;
            break;
        }
    }

    avg1=sum1/cnt1;
    if(noH){
        while(t2--){
            sum2+=a[r];
            r--;
            cnt2++;
            if(r<0){
                break;
            }
        }
        avg2=sum2/cnt2;
    }
    printf("%.8lf", avg1+avg2);

    return 0;
}
