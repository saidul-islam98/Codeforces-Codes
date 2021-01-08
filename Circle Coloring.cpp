#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1],c[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        for(int i=1;i<=n;i++){
            cin>>c[i];
        }

        vector<int> v;
        v.push_back(a[1]);
        for(int i=2;i<=n;i++){
            if(i!=n){
                int x=v.back();
                if(a[i]!=x){
                    v.push_back(a[i]);
                }
                else if(b[i]!=x){
                    v.push_back(b[i]);
                }
                else{
                    v.push_back(c[i]);
                }
            }
            else if(i==n){
                int x=v.back();
                int y=v.front();
                if(a[i]!=x && a[i]!=y){
                    v.push_back(a[i]);
                }
                else if(b[i]!=x && b[i]!=y){
                    v.push_back(b[i]);
                }
                else{
                    v.push_back(c[i]);
                }
            }
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
