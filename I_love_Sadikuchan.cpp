#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, mxval=-9999, mnval=9999, cnt=0, flag1=0, flag2=0, flag3=0, flag4=0;
    vector<int> numba;
    cin>>n;
    int points[n];
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    for(int i=0;i<n;i++){
        if(points[i]>mxval){
            mxval=points[i];
        }
        if(points[i]<mnval){
            mnval=points[i];
        }
    }

    for(int i=1;i<n;i++){
//        if(points[i]==mxval && flag1==0){
//            flag1=1;
//            numba.push_back(points[i]);
//        }
//        else if(points[i]==mnval && flag2==0){
//            flag2=1;
//            numba.push_back(points[i]);
//        }
        if(points[i]>points[i-1]){// && (points[i]!=mxval) && (points[i]!=mnval)){
            for(int j=0;j<i;j++){
                if(points[i]>points[j]){
                    flag3=1;
                }
                else{
                    flag3=0;
                    break;
                }
            }
            if(flag3==1){
                //cout<<i<<endl;
                numba.push_back(points[i]);
            }
        }
        else if(points[i]<points[i-1]){// && (points[i]!=mxval) && (points[i]!=mnval)){
            for(int j=0;j<i;j++){
                if(points[i]<points[j]){
                    flag4=1;
                }
                else{
                    flag4=0;
                    break;
                }
            }
            if(flag4==1){
                //cout<<i<<endl;
                numba.push_back(points[i]);
            }
        }
    }
    for(auto i=numba.begin();i!=numba.end();i++){
        cnt++;
    }
    cout<<cnt;
    return 0;
}

