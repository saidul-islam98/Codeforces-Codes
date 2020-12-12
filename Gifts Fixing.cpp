#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    k=t;
    vector<long long int> v;
    while(t--){
        int n;
        cin>>n;
        long long int sum=0;
        vector<long long int> a,b;
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            b.push_back(x);
        }
        long long int mna,mnb;
        mna=*min_element(a.begin(), a.end());
        mnb=*min_element(b.begin(), b.end());

        for(int i=0;i<n;i++){
            sum+=max(a[i]-mna,b[i]-mnb);
        }
        v.push_back(sum);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
