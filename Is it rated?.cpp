#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,mn=99999999;
    cin>>t;

    bool flag=false,unrated=false;
    vector<pair<int,int>> v;

    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    for(int i=0;i<t;i++){
        if(v[i].first!=v[i].second){
            flag=true;
            break;
        }
        else if(v[i].first==v[i].second){
            if(mn>v[i].first){
                mn=v[i].first;
            }
            else if(mn<v[i].first && i<t){
                unrated=true;
            }
        }
    }

    if(flag==true){
        cout<<"rated";
    }
    else{
        if(unrated==true){
            cout<<"unrated";
        }
        else{
            cout<<"maybe";
        }
    }
    return 0;
}
