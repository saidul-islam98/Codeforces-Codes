#include<bits/stdc++.h>

using namespace std;

int main(){
    string alice,bob;
    cin>>alice>>bob;

    vector<int> alc,bb;
    for(int i=0;i<alice.length();i++){
        int x=int(alice[i])-48;
        alc.push_back(x);
    }
    for(int i=0;i<bob.length();i++){
        int x=int(bob[i])-48;
        bb.push_back(x);
    }

    sort(alc.begin(),alc.end());

    bool isNum=true;

    if(bb.size()>alc.size())
        cout<<"WRONG_ANSWER";
    else{
        if(alc[0]==0){
            for(int i=1;i<alc.size();i++){
                if(alc[i]>0){
                    swap(alc[0],alc[i]);
                    break;
                }
            }
            for(int i=0;i<alc.size();i++){
                if(alc[i]!=bb[i]){
                    isNum=false;
                    break;
                }
            }
            if(isNum){
                cout<<"OK";
            }
            else{
                cout<<"WRONG_ANSWER";
            }
        }
        else{
            for(int i=0;i<alc.size();i++){
                if(alc[i]!=bb[i]){
                    isNum=false;
                    break;
                }
            }
            if(isNum){
                cout<<"OK";
            }
            else{
                cout<<"WRONG_ANSWER";
            }
        }
    }

    return 0;
}
