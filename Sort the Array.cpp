#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x,n,l=1,r=1;
    cin>>n;
    bool flag=true;
    long long int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        if(a[i]<a[i+1]){
            continue;
        }
        else if(a[i]>a[i+1]){
            flag=false;
            l=i;
            break;
        }
    }

    if(flag==true){
        cout<<"yes\n"<<l<<" "<<l;
    }
    else{
        bool sflag=true;
        for(int i=l;i<n;i++){
            if(a[i]>a[i+1]){
                r=i+1;
                continue;
            }
            else if(a[i]<a[i+1]){
                r=i;
                break;
            }
        }

        sort(a+l,a+r+1);

        for(int i=1;i<n;i++){
            if(a[i]<a[i+1]){
                continue;
            }
            else{
                sflag=false;
                break;
            }
        }

        if(sflag==true){
            cout<<"yes\n"<<l<<" "<<r;
        }
        else{
            cout<<"no";
        }
    }
    return 0;
}
