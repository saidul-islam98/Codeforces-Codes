#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long int b[n],c[n];
    b[0]=a[0];
    c[n-1]=a[n-1];
    for(int i=1,j=n-2;i<n;i++,j--){
        b[i]=a[i]+b[i-1];
        c[j]=a[j]+c[j+1];
    }

    long long int sum=0;
    for(int i=0,j=n-1;i<j;){
        if(b[i]>c[j]){
            j--;
        }
        else if(c[j]>b[i]){
            i++;
        }
        else if(b[i]==c[j]){
            sum=b[i];
            i++;
            j--;
        }
    }

    cout<<sum;
    return 0;
}
