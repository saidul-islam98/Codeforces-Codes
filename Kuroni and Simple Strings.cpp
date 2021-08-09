#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int> vc;

    for(int l=0,r=s.length()-1;l<r;l++,r--){
        while(l<r && s[l]==')'){
            l++;
        }
        while(l<r && s[r]=='('){
            r--;
        }

        if(l==r){
            break;
        }

        vc.push_back(l);
        vc.push_back(r);
    }


    if(vc.empty()){
        cout<<0;
        return 0;
    }
    else{
        sort(vc.begin(),vc.end());
        cout<<1<<'\n'<<vc.size()<<'\n';
        for(int i=0;i<vc.size();i++){
            cout<<vc[i]+1<<' ';
        }
    }
    return 0;
}
