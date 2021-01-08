#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n;
    t=n;

    int a[n]={0},i=0;
    while(t--){
        string s;
        int before,after;
        cin>>s;
        cin>>before>>after;

        if(before>=2400 && after>before){
            a[i]=1;
            i++;
        }
        else{
            i++;
        }
    }

    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            flag=true;
            break;
        }
    }

    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
