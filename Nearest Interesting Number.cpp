#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;

    for(int i=4;i<1005;i++){
        int sum=0;
        string s;
        s=to_string(i);

        for(int j=0;j<s.length();j++){
            sum=sum+((int)s[j]-48);
        }

        if(sum%4==0){
            v.push_back(i);
        }
    }

    int n;
    cin>>n;

    for(int i=0;i<v.size();i++){
        if(n<=v[i]){
            cout<<v[i];
            break;
        }
    }
    return 0;
}
