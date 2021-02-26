#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,idx;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mx=*max_element(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==mx){
            idx=i;
            break;
        }
    }

    int o=idx;
    int p=idx;

    bool isGrt=true;
    while(o>=1){
        if(a[o]<a[o-1] && a[o]!=0){
            isGrt=false;
            break;
        }
        else{
            o--;
        }
    }
    if(isGrt){
        while(p<n-1){
            if(a[p]<a[p+1] && a[p]!=0){
                isGrt=false;
                break;
            }
            else{
                p++;
            }
        }
        if(isGrt)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";

    return 0;
}
