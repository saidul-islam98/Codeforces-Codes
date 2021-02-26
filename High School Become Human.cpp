#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x,y;
    cin>>x>>y;

    if(x==y){
        cout<<'=';
        return 0;
    }

	if(x==1){
        cout<<'<';
		return 0;
	}

	if(y==1){
        cout<<'>';
		return 0;
	}

	if(x+y==6){
        cout<<'=';
        return 0;
	}

	if(x==3){
        cout<<'>';
		return 0;
	}

	if(y==3){
        cout<<'<';
		return 0;
	}

	if(x<y)
		cout<<'>';
	else
		cout<<'<';

    return 0;
}
