#include<bits/stdc++.h>

using namespace std;

void bomb(int x, int y, int n, int m, vector<vector<int>> &res){
	if(x>0){
		if(y>0)
			res[x-1][y-1]++;
		res[x-1][y]++;
		if(y<m-1)
			res[x-1][y+1]++;
	}
	if(x<n-1){
		if(y>0)
			res[x+1][y-1]++;
		res[x+1][y]++;
		if(y<m-1)
			res[x+1][y+1]++;
	}
	if(y>0)
		res[x][y-1]++;
	if(y<m-1)
		res[x][y+1]++;
}


int main(){
	int n,m;
	cin>>n>>m;

	vector<vector<char>> v(n,vector<char>(m));
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}

	vector<vector<int>> res(n,vector<int>(m));

	for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
			if (v[i][j]=='*')
				bomb(i,j,n,m,res);
		}
	}

	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
			if(v[i][j]=='.'){
				if(res[i][j]!=0){
					cout<<"NO";
					return 0;
				}
			}
			else if(v[i][j]!='*'){
                if(res[i][j]!=v[i][j]-'0'){
					cout << "NO";
					return 0;
				}
			}
		}
	}

	cout<<"YES";
	return 0;
}
