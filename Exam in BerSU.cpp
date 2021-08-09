#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    long long int a[n+1],b[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    b[0]=0;
//    for(int j=1;j<=n;j++){
//        cout<<a[j]<<' ';
//    }


    vector<long long int> vc;
    int idx=-1;
    bool found=false;

    for(int i=1;i<=n;i++){
        b[i]=b[i]+b[i-1];
        if(b[i]<=m){
            vc.push_back(0);
        }
        else if(b[i]>m && found==false){
            idx=i;
            found=true;
        }
    }

//    cout<<'\n'<<idx<<'\n';
//    for(int j=1;j<=n;j++){
//        cout<<b[j]<<' ';
//    }
//    cout<<'\n';

    if(idx==-1){
        for(int i=0;i<vc.size();i++){
            cout<<vc[i]<<' ';
        }
    }
    else{
        for(int i=idx;i<=n;i++){
            long long int cnt=0,cost=0;
            sort(a+1,a+i);
//            for(int j=1;j<=i;j++){
//                cout<<a[j]<<' ';
//            }
//            cout<<'\n';
            for(int j=i-1;j>0;j--){
                cost+=a[j];
                if(b[i]-cost>m){
                    cnt++;
                }
                else{
                    cnt++;
                    break;
                }
            }
            vc.push_back(cnt);
        }

        for(int i=0;i<vc.size();i++){
            cout<<vc[i]<<' ';
        }
    }

    return 0;
}
