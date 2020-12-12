#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    vector<string> st;
    for(int i=0;i<n;i++){
        cin>>s;
        st.push_back(s);
    }

    for(int i=0;i<n;i++){
        if(st[i].length()<=10){
            cout<<st[i]<<endl;
        }
        else{
            cout<<st[i][0]<<st[i].length()-2<<st[i][st[i].length()-1]<<endl;
        }
    }
    return 0;
}
