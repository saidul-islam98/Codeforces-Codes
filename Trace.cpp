#include<bits/stdc++.h>

#define PI 3.14159265358979323846

using namespace std;

float area(int r){

    float ar = PI*(r*r);
    return ar;
}
int main(){
    int n;
    cin>>n;

    float total=0.0;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1);
    for(int i=n;i>=1;i-=2){
        if(i==1){
            total+=area(a[i]);
        }
        else{
            total+=(area(a[i])-area(a[i-1]));
        }
    }

    printf("%.10f",total);
    return 0;
}
