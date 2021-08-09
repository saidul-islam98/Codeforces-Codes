#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,l;
    cin>>n>>l;

    double dist,mxDst;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    mxDst=double(a[0]);
    for(int i=0;i<n-1;i++){
        dist=abs(double(a[i])-double(a[i+1]));
        dist=dist/2;
        if(dist>mxDst){
            mxDst=dist;
        }
    }

    if(a[n-1]==l){
        printf("%.10lf",mxDst);
    }
    else{
        dist=abs(double(a[n-1])-double(l));
        if(dist>mxDst){
            mxDst=dist;
        }
        printf("%.10lf",mxDst);
    }

    return 0;
}
