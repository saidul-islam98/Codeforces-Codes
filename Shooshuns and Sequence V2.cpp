#include<bits/stdc++.h>    ///AC Solution

using namespace std;

bool isSeq(vector<int> seq, int k){

    int s=seq[k-1];
    bool flag=false;

    for(int i=k-1;i<seq.size();i++){
        if(s==seq[i]){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag==true){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    int n,m,cnt=0,it;
    cin>>n>>m;
    it=n;
    vector<int> seq;
    bool check;

    while(n--){
        int val;
        cin>>val;
        seq.push_back(val);
    }

    int tmp=seq.back();

    check=isSeq(seq, m);

    if(seq.size()==1){
        cout<<"0";
        return 0;
    }

    if(check==true){
        for(int i=seq.size()-1;i>=0;i--){
            if(tmp!=seq[i]){
                cnt=i+1;
                break;
            }
        }
    }
    else{
        cout<<"-1";
        return 0;
    }

    cout<<cnt;

    return 0;
}
