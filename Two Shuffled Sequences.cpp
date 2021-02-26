#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n],b[200005]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }

    if(n==1){
        cout<<"YES\n";
        cout<<0<<'\n';
        cout<<1<<'\n'<<a[n-1];
    }
    else{
        bool isThree=false;
        for(int i=0;i<200005;i++){
            if(b[i]>2){
                isThree=true;
                break;
            }
        }

        if(isThree){
            cout<<"NO";
        }
        else{
            sort(a,a+n);
            vector<int> v1,v2;
            for(int i=n-1;i>=0;){
                if(a[i]==a[i-1]){
                    v1.push_back(a[i]);
                    v2.push_back(a[i-1]);
                    i-=2;
                }
                else{
                    v1.push_back(a[i]);
                    i--;
                }
            }

            cout<<"YES\n";
            sort(v2.begin(),v2.end());
            cout<<v2.size()<<'\n';
            for(int i=0;i<v2.size();i++){
                cout<<v2[i]<<' ';
            }
            cout<<'\n';
            cout<<v1.size()<<'\n';
            for(int i=0;i<v1.size();i++){
                cout<<v1[i]<<' ';
            }
        }
    }

    return 0;
}
