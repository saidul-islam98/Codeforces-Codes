#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c=0,b=0,bk=0,j=1,k=2,l=3;
    cin>>n;

    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        if(i==j){
            c+=a[i];
            j+=3;
        }
        else if(i==k){
            b+=a[i];
            k+=3;
        }
        else{
            bk+=a[i];
            l+=3;
        }
    }

    if(c>=b && c>=bk) cout<<"chest";
    else if(b>=c && b>=bk) cout<<"biceps";
    else cout<<"back";

    return 0;
}
