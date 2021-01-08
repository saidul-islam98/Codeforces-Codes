#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,f,s;
        cin>>n>>f>>s;

        int a[f],b[s];

        for(int i=0;i<f;i++){
            cin>>a[i];
        }
        for(int i=0;i<s;i++){
            cin>>b[i];
        }

        int max1=*max_element(a,a+f);
        int max2=*max_element(b,b+s);

        if(max1>max2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
