#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=(float(1)/float(i));
    }
    printf("%.12f", sum);
    return 0;
}
