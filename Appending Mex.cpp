#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int m=-1;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x>m+1){
            cout<<i+1;
            return 0;
        }
        m=max(m,x);
    }

    cout<<-1;
    return 0;
}
