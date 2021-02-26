#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int luck[1100]={0};
    luck[1]=4;
	luck[2]=7;
	int t=3;
	for(int i=1;i<520;i++){
		luck[t++]=luck[i]*10+4;
		luck[t++]=luck[i]*10+7;
	}

    long long int n;
    cin>>n;
	for(int i=1;i<1100;i++){
        if(luck[i]==n){
            cout<<i;
            break;
        }
	}
    return 0;
}
