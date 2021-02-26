#include<bits/stdc++.h>

using namespace std;

bool isPdm(string s){
    bool isPDM=true;
    int i,j;
    for(i=0,j=s.length()-1;j>=i;i++,j--){
        if(s[i]!=s[j]){
            isPDM=false;
            break;
        }
    }
    return isPDM;
}

int main(){
    vector<string> s;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        s.push_back(st);
    }

    vector<pair<int,int>> idx;
    bool idxs[n];
    memset(idxs,false,sizeof(idxs));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                string tmpst="";
                tmpst.append(s[j]);
                reverse(tmpst.begin(),tmpst.end());
                if(s[i].compare(tmpst)==0){
                    if(idxs[i]==false && idxs[j]==false){
                        idxs[i]=true;
                        idxs[j]=true;
                        idx.push_back(make_pair(i,j));
                    }
                }
            }
        }
    }

    vector<int> selfpdm;
    for(int i=0;i<n;i++){
        bool isPl=isPdm(s[i]);
        if(isPl){
            if(idxs[i]==false){
                selfpdm.push_back(i);
            }
        }
    }

    string fs="";
    if(selfpdm.size()==0){
        for(int i=0;i<idx.size();i++){
            fs.append(s[idx[i].first]);
        }
        for(int i=idx.size()-1;i>=0;i--){
            fs.append(s[idx[i].second]);
        }
    }
    else{
        for(int i=0;i<idx.size();i++){
            fs.append(s[idx[i].first]);
        }
        fs.append(s[selfpdm[0]]);
        for(int i=idx.size()-1;i>=0;i--){
            fs.append(s[idx[i].second]);
        }
    }

    cout<<fs.length()<<'\n';
    cout<<fs;
    return 0;
}
