#include<bits/stdc++.h>

using namespace std;

bool isSeq(vector<int> seq){

    int s=seq[0];
    bool flag=false;

    for(int i=1;i<seq.size();i++){
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

    if(seq.size()==1){
        cout<<"0";
        return 0;
    }
    else if(isSeq(seq)){
        cout<<"0";
        return 0;
    }
    else{
        for(int i=0;i<it;i++){
            int tmp,avrg;
            tmp=seq[m-1];
            seq.erase(seq.begin());
            seq.push_back(tmp);

            cnt++;
            check=isSeq(seq);
            if(check==true){
                break;
            }
        }

    }

    if(check==true){
        cout<<cnt;
    }
    else{
        cout<<"-1";
    }

    return 0;
}
