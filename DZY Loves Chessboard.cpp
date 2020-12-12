#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    bool flagw=true,flagb=false;
    cin>>n>>m;
    char c[n][m], ch[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
        }
    }

    if(m%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(flagw==true){
                    ch[i][j]='B';
                    flagb=true;
                    flagw=false;
                }
                else if(flagb==true){
                    ch[i][j]='W';
                    flagw=true;
                    flagb=false;
                }
            }
            flagb=!flagb;
            flagw=!flagw;
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(flagw==true){
                    ch[i][j]='B';
                    flagb=true;
                    flagw=false;
                }
                else if(flagb==true){
                    ch[i][j]='W';
                    flagw=true;
                    flagb=false;
                }
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i][j]=='-'){
                ch[i][j]='-';
                cout<<ch[i][j];
            }
            else{
                cout<<ch[i][j];
            }
        }
        cout<<endl;
    }


    return 0;
}





/**DFS Implementation**/

/*
#include <cstdio>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define CLR(a,b) memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define LL long long
#define MAX 100
int h,w;
char mapp[MAX+5][MAX+5];
int mx[] = {0,0,1,-1};
int my[] = {1,-1,0,0};
void dfs(int x,int y,bool flag)
{
	mapp[x][y] = flag ? 'B' : 'W';
	for (int i = 0 ; i < 4 ; i++)
	{
		int nx = x + mx[i];
		int ny = y + my[i];
		if (mapp[nx][ny] == '.')
			dfs(nx,ny,!flag);
	}
}
int main()
{
	scanf ("%d %d",&h,&w);
	for (int i = 1 ; i <= h ; i++){
		scanf ("%s",mapp[i]+1);
		cout<<mapp[i]+1<<endl;
	}
	for (int i = 1 ; i <= h ; i++)
	{
		for (int j = 1 ; j <= w ; j++)
		{
			if (mapp[i][j] == '.')
				dfs(i,j,true);
		}
	}
	for (int i = 1 ; i <= h ; i++)
		printf ("%s\n",mapp[i]+1);
	return 0;
}
*/





