#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    vector<pair<string,string>> v;

    cin>>n>>m;

    while(m--){
        string s,st;
        cin>>s>>st;
        v.push_back(make_pair(s,st));
    }

//    for(int i=0;i<v.size();i++){
//        cout<<v[i].first<<' '<<v[i].second<<'\n';
//    }

    vector<string> ss;
    for(int i=0;i<n;i++){
        string fs;
        cin>>fs;
        ss.push_back(fs);
    }
//    for(int i=0;i<n;i++){
//        cout<<ss[i]<<' ';
//    }
//    cout<<'\n';


    for(int i=0;i<ss.size();i++){
        for(int j=0;j<v.size();j++){
            if(ss[i].compare(v[j].first)==0){
                if(ss[i].length()==v[j].first.length()){
                    if(ss[i].length()<v[j].second.length()){
                        cout<<ss[i]<<' ';
                        break;
                    }
                    else if(ss[i].length()>v[j].second.length()){
                        cout<<v[j].second<<' ';
                        break;
                    }
                    else{
                        cout<<v[j].first<<' ';
                        break;
                    }
                }
                else if(ss[i].length()==v[j].second.length()){
                    if(ss[i].length()<v[j].first.length()){
                        cout<<ss[i]<<' ';
                        break;
                    }
                    else if(ss[i].length()>v[j].first.length()){
                        cout<<v[j].first<<' ';
                        break;
                    }
                    else{
                        cout<<v[j].first<<' ';
                        break;
                    }
                }
            }
            else if(ss[i].compare(v[j].second)==0){
                if(ss[i].length()==v[j].first.length()){
                    if(ss[i].length()<v[j].second.length()){
                        cout<<ss[i]<<' ';
                        break;
                    }
                    else if(ss[i].length()>v[j].second.length()){
                        cout<<v[j].second<<' ';
                        break;
                    }
                    else{
                        cout<<v[j].first<<' ';
                        break;
                    }
                }
                else if(ss[i].length()==v[j].second.length()){
                    if(ss[i].length()<v[j].first.length()){
                        cout<<ss[i]<<' ';
                        break;
                    }
                    else if(ss[i].length()>v[j].first.length()){
                        cout<<v[j].first<<' ';
                        break;
                    }
                    else{
                        cout<<v[j].first<<' ';
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
