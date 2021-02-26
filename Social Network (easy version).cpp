#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,pos=1;
    cin>>n>>k;

    vector<int> v;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    v.push_back(a[0]);
    if(k==pos){
        for(int i=1;i<n;i++){
            bool flag=true;
            for(int j=0;j<v.size();j++){
                if(a[i]!=v[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                v.insert(v.begin(),a[i]);
                v.pop_back();
            }
        }
    }
    else{
        for(int i=1;i<n;i++){
            bool flag=true;
//            for(int j=0;j<v.size();j++){
//                cout<<v[j]<<' ';
//            }
//            cout<<'\n';
            for(int j=0;j<v.size();j++){
                if(a[i]!=v[j]){
                    flag=false;
                }
                else if(a[i]==v[j]){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                pos++;
            }
            if(flag==false && pos<=k){
                v.insert(v.begin(),a[i]);
            }
            else if(flag==false && pos>k){
                v.insert(v.begin(),a[i]);
                v.pop_back();
                pos--;
            }
        }
    }


    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    return 0;
}
