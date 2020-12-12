#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[101];
    bool flag=false;
    int numone=0;
    vector<int> b;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){
            numone++;
            b.push_back(-1);
        }
        else{
            b.push_back(1);
        }
    }

    int maxSoFar=b[0];
    int maxEndingHere=b[0];

    for(int i=1;i<b.size();i++){
        maxEndingHere=max(maxEndingHere+b[i], b[i]);
        maxSoFar=max(maxSoFar, maxEndingHere);
    }

    int finalCount=numone+maxSoFar;

    cout<<finalCount;

    return 0;
}
