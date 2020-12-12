#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sereja=0,dima=0,cnt=0;
    bool flag=false;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0,j=n-1;cnt<n;){
        if(a[i]>=a[j] && flag==false){
            sereja+=a[i];
            flag=true;
            i++;
            cnt++;
        }
        else if(a[j]>=a[i] && flag==false){
            sereja+=a[j];
            flag=true;
            j--;
            cnt++;
        }
        else if(a[i]>=a[j] && flag==true){
            dima+=a[i];
            flag=false;
            i++;
            cnt++;
        }
        else if(a[j]>=a[i] && flag==true){
            dima+=a[j];
            flag=false;
            j--;
            cnt++;
        }
    }

    cout<<sereja<<" "<<dima;
    return 0;
}
