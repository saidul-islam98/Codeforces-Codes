#include<bits/stdc++.h>  ///AC Solution

using namespace std;

int main(){
    int t;
    cin>>t;
//    freopen("input.txt", "r", stdin);   ************* AC Solution *************
//    freopen("output.txt", "w", stdout);
    while(t--){
        int n,cnt=0;
        cin>>n;

        vector<int> even;
        vector<int> odd;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(i%2!=0 && a[i]%2==0){
                odd.push_back(i);
            }
            else if(i%2==0 && a[i]%2!=0){
                even.push_back(i);
            }
        }

        int x=odd.size();
        int y=even.size();

        if(x==y){
            cout<<x<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}

