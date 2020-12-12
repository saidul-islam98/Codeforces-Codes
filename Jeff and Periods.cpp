#include<bits/stdc++.h>   ///AC Solution

using namespace std;

int main(){
    int n,prev,initval,per,cnt=0;
    cin>>n;

    vector<pair<int,int>> init;
    vector<pair<int,int>> fn;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        init.push_back(make_pair(val, i));
    }

    sort(init.begin(), init.end());

    initval=init[0].first;
    per=0;
    prev=init[0].second;
    if(init.size()==1){
        cout<<1<<endl;
        cout<<initval<<" "<<0<<endl;
        return 0;
    }


    for(int i=1;i<n;i++){
        if(init[i].first==initval){
            if(per==0){
                per=init[i].second-prev;
                prev=init[i].second;
                cnt++;
            }
            else{
                if(per==init[i].second-prev){
                    prev=init[i].second;
                    cnt++;
                }
                else{
                    cnt=-1;
                    while(init[i].first==initval){
                        i++;
                        if(i==n) break;
                    }
                    i--;
                }
            }
        }
        else{
            if(cnt>=0){
                fn.push_back(make_pair(initval,per));
            }
            initval=init[i].first;
            cnt=0;
            per=0;
            prev=init[i].second;
        }
    }
    if(cnt>=0){
        fn.push_back(make_pair(initval,per));
    }

    cout<<fn.size()<<endl;

    for(int i=0;i<fn.size();i++){
        cout<<fn[i].first<<" ";
        cout<<fn[i].second<<endl;
    }

    return 0;
}
