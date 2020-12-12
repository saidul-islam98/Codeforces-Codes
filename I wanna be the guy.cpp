#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x[2];
    cin>>n;
    bool flag=true;

    vector<int>::iterator ip;
    vector<int> lvl;

    for(int i=0;i<2;i++){
        cin>>x[i];
        if(x[i]!=0){
            while(x[i]--){
                int l;
                cin>>l;
                lvl.push_back(l);
            }
        }
        else if(x[0]==0 && x[1]==0){
            flag=false;
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }

    sort(lvl.begin(), lvl.end());
    ip=unique(lvl.begin(), lvl.begin()+lvl.size());
    lvl.resize(distance(lvl.begin(), ip));



    if(lvl[lvl.size()-1]==n && lvl.size()==n && flag==true){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}
