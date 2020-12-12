#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,cntf=0;
    cin>>n;

    bool flag=true;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(a[0]>25){
        cout<<"NO";
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]==25){
                cnt++;
            }
            else if(a[i]==50){
                cntf++;
                cnt--;
            }
            else if(a[i]==100){
                if(cntf>0){
                    cntf--;
                    cnt--;
                }
                else{
                    cnt-=3;
                }
            }

            if(cnt<0){
                flag=false;
                break;
            }
        }

        if(flag==true){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
