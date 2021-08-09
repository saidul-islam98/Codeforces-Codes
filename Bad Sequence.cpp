#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    stack<char> st;
    bool possible=false;
    for(int i=n-1;i>=0;i--){
        if(s[i]==')'){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                if(possible){
                    cout<<"No";
                    return 0;
                }
                else{
                    possible=true;
                }
            }
        }
    }

    if(n%2){
        cout<<"No";
    }
    else if(st.size()==1 && possible){
        cout<<"Yes";
    }
    else if(st.empty() && possible==false){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
