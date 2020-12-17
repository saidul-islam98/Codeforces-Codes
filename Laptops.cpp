#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end());

    bool flag=false,flag2=false;
    int mn1,mn2,idx;

    for(int i=0;i<n;i++){
        if(v[i].first!=v[i].second){
            flag2=true;
            mn1=v[i].first;
            mn2=v[i].second;
            idx=i;
            break;
        }
    }


    if(flag2==true){
        for(int i=idx+1;i<n;i++){
            if(mn1<v[i].first && mn2>v[i].second){
                flag=true;
                break;
            }
        }

        if(flag==true){
            cout<<"Happy Alex";
        }
        else{
            cout<<"Poor Alex";
        }
    }
    else{
        cout<<"Poor Alex";
        return 0;
    }

    return 0;
}
