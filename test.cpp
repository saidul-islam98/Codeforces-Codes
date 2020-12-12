//#include<bits/stdc++.h>
//
//int main(){
//    int num, rows, col, k;
//    printf("Enter the number of rows of pascal triangle you want:");
//    scanf("%d", &num);
//    long a[100][100];
//
//    for (rows = 0; rows < num; rows++){
//        for (col = 0; col < (num - rows - 1); col++)
//            printf(" ");
//
//        for (k = 0; k <= rows; k++){
//            if (k == 0 || k == rows){
//                a[rows][k] = 1;
//                printf("%ld ", a[rows][k]);
//            }
//
//            else{// START OF BLOCK HERE
//                a[rows][k] = (a[rows - 1][k - 1]) + (a[rows - 1][k]);
//                printf("%ld ", a[rows][k]);
//            }//END OF BLOCK HERE, NOTE THAT IT INCLUDES THE PRINT IN THE ELSE CASE NOW
//
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}

//
//#include <stdio.h>
//#define MAX 7
//int C[MAX][MAX];
//int main()
//{
//    printf("Enter size:");
//    int n;
//    scanf("%d", &n);
//    for (int r = 0; r < n; r ++)
//        for (int c = 0; c < n; c ++)
//        C[r][c] = 0;
//    for (int r = 0; r < n; r ++)
//        C[r][0] = 1;
//    for (int r = 1; r < n; r ++)
//    {
//        for (int c = 1; c < n; c ++){
//            C[r][c] = C[r-1][c-1] + C[r-1][c];
//            }
//        }
//
//
//            for (int r = 0; r < n; r ++){
//                int pd = n - r - 1;
//                while (pd --)
//                    printf("");
//                for (int c = 0; c <= r; c ++){
//                    printf("%2d ", C[r][c]);
//                }
//                printf("\n");
//            }
//            return 0;
//        }
