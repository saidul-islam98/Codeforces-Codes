#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<long long int> v;
    for(int i=1;i<82;i++){
        long long int x,sum=0;
        x=b*(pow(i,a))+c;
        string s=to_string(x);
        for(int j=0;j<s.length();j++){
            sum+=(int(s[j])-48);
        }
        if(sum==i && x>0 && x<1000000000) v.push_back(x);
    }

    if(v.size()==0) cout<<0;
    else{
        cout<<v.size()<<'\n';
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
