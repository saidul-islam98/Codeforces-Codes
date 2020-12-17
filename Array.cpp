#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cntn=0,cntp=0,neg;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            cntn++;
        }
        else if(a[i]>0){
            cntp++;
        }
    }

    if(cntn%2==0){
        for(int i=0;i<n;i++){
            if(a[i]<0){
                neg=a[i];
                cntn--;
                break;
            }
        }
        cout<<1<<" "<<neg<<"\n";
        if(cntp==0){
            int x=2,neg2,neg3;
            for(int i=0;i<n;i++){
                if(a[i]<0 && a[i]!=neg && x>1){
                    neg2=a[i];
                    x--;
                }
                else if(a[i]<0 && a[i]!=neg && x>0){
                    neg3=a[i];
                    x--;
                }
                else if(x==0){
                    break;
                }
            }

            cout<<2<<" "<<neg2<<" "<<neg3<<'\n';
            cout<<cntn-1<<" ";
            for(int i=0;i<n;i++){
                if(a[i]!=neg && a[i]!=neg2 && a[i]!=neg3){
                    cout<<a[i]<<" ";
                }
            }
        }
        else{
            cout<<cntp<<" ";
            for(int i=0;i<n;i++){
                if(a[i]>0){
                    cout<<a[i]<<" ";
                }
            }
            cout<<'\n';
            cout<<cntn+1<<" ";
            for(int i=0;i<n;i++){
                if(a[i]<0 && a[i]!=neg){
                    cout<<a[i]<<" ";
                }
            }
            cout<<0;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]<0){
                neg=a[i];
                cntn--;
                break;
            }
        }
        cout<<1<<" "<<neg<<"\n";
        cout<<cntp+cntn<<" ";
        for(int i=0;i<n;i++){
            if(a[i]!=neg && a[i]!=0){
                cout<<a[i]<<" ";
            }
        }
        cout<<'\n';
        cout<<1<<" "<<0;
    }

    return 0;
}
