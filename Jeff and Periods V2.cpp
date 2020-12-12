#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,prev,curr,per,cnt;
    cin>>n;

    vector<pair<int,int>> init;
    vector<pair<int,int>> fn;
    vector<int> unq;
    vector<int>::iterator ip;

    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        unq.push_back(val);
        init.push_back(make_pair(val, i));
    }



    sort(init.begin(), init.end());
    sort(unq.begin(),unq.end());
    ip=unique(unq.begin(),unq.begin()+n);
    unq.resize(distance(unq.begin(), ip));

    bool flag[unq.size()];

    for(int i=0;i<unq.size();i++){
        flag[i]=true;
    }


    for(int i=0;i<unq.size();i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(unq[i]==init[j].first && cnt==0){
                prev=init[j].second;
                per=0;
                cnt++;
            }
            else if(unq[i]==init[j].first && cnt>0){
                curr=init[j].second;
                if(per==0){
                    per=curr-prev;
                    prev=init[j].second;
                }
                else{
                    if((curr-prev)!=per){
                        per=0;
                        flag[i]=false;
                    }
                    else{
                        per=curr-prev;
                        prev=init[j].second;
                    }
                }
            }
        }
        if(flag[i]!=false){
            fn.push_back(make_pair(unq[i], per));
        }
    }


    cout<<fn.size()<<endl;

    for(int i=0;i<fn.size();i++){
        cout<<fn[i].first<<" ";
        cout<<fn[i].second<<endl;
    }

    return 0;
}
