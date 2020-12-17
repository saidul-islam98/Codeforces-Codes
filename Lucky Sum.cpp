#include<bits/stdc++.h>

using namespace std;

long long int luck[1024];

int main(){
    long long int l,r,total=0;
    cin>>l>>r;

    luck[1]=4;
	luck[2]=7;
	int t=3;
	for(int i=1;i<512;i++){
		luck[t++]=luck[i]*10+4;
		luck[t++]=luck[i]*10+7;
	}

	for(int i=1;i<=1024;){
        if(l<=luck[i]){
            if(l<=r){
                total+=luck[i];
                l++;
            }
            else{
                break;
            }
        }
        else{
            i++;
        }
	}

	cout<<total;

    return 0;
}
