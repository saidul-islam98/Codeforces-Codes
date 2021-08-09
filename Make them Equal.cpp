#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }


    if(st.size()>3){
        cout<<"-1";
    }
    else if(st.size()==3){
        int x[3],k=0;
        for(auto i=st.begin();i!=st.end();i++,k++){
            x[k]=*i;
        }

        if(abs(x[0]-x[1])==abs(x[1]-x[2])){
            cout<<abs(x[0]-x[1]);
        }
        else{
            cout<<"-1";
        }
    }
    else if(st.size()==2){
        int x[2],k=0;
        for(auto i=st.begin();i!=st.end();i++,k++){
            x[k]=*i;
        }
        if(abs(x[0]-x[1])%2==0){
            cout<<abs(x[0]-x[1])/2;
        }
        else{
            cout<<abs(x[0]-x[1]);
        }
    }
    else{
        cout<<0;
    }

    return 0;
}
