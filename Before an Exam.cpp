#include<bits/stdc++.h>

using namespace std;

int main(){
    int d,ttime;
    cin>>d>>ttime;

    vector<pair<int,int>> vc;
    vector<int> ans(d),curr(d);
    for(int i=0;i<d;i++){
        int mntime,mxtime;
        cin>>mntime>>mxtime;
        vc.push_back(make_pair(mntime,mxtime));
        ttime-=mntime;
        curr[i]=mntime;
    }

    for(int i=0;i<d;i++){
        while(ttime>0 && curr[i]<vc[i].second){
            curr[i]++;
            ttime--;
        }
    }
    if(ttime!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        for(int i=0;i<curr.size();i++){
            cout<<curr[i]<<' ';
        }
    }

    return 0;
}
