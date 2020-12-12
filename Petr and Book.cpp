#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool day[7];
    int arr[7];
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        day[i]=false;
    }

    int j=0;
    while(n>0){
        if(j>6){
            j=0;
            for(int k=0;k<7;k++){
                day[k]=false;
            }
        }
        if(day[j]==false){
            n=n-arr[j];
            day[j]=true;
        }
        j++;
    }

    cout<<j;

    return 0;
}
