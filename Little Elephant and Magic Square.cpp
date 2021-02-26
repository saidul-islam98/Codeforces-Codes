#include <bits/stdc++.h>

using namespace std;

int printFilledDiagonal(int sq[][3]){
    int sum=0;
    for (int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            sum+=sq[i][j];

    sum /= 2;

    for(int i=0;i<3;i++){
        int rowSum=0;
        for(int j=0;j<3;j++)
            rowSum+=sq[i][j];

        sq[i][i]=sum-rowSum;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<sq[i][j]<<" ";
        cout<<'\n';
    }
}

int main(){
    int sq[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>sq[i][j];
        }
    }

    printFilledDiagonal(sq);

    return 0;
}
