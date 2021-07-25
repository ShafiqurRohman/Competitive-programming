#include<bits/stdc++.h>
#define Okay 0
using namespace std;

int board[12][12];//ei range er upor gele onek time lagbe.
int x = 0;
int cnt = 0;

void printsoluton(int n){
    x = 1;
    cnt++;
    cout << "[ ";
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(board[i][j] != 0) {
                cout << j+1 << " ";
            }
        }
    }
    cout << "] ";
    cout<<endl;
}


bool isSafe( int row, int col, int n){

    //for cheking column
    for(int i = 0; i < row; i++) {
        if(board[i][col] == 1) {
            return 0;
        }
    }
    // for checking left diagonal matrix er upirer side karon niche check kori labe na , ami ekhono niche kisu set kori nai.
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j] == 1) {
            return 0;
        }
    }
    // for cheking right diagonal
    for(int i = row, j = col; j < n && i >= 0; i--, j++) {
        if(board[i][j] == 1) {
            return 0;
        }
    }

    return 1;
}


int solveNQueen(int row, int n){

    if(row >= n) {//base case jodi sob gor check kore bosano jay.
    printsoluton(n);
        return 1;
    }
    for(int i = 0; i < n; i++) {
        if(isSafe(row, i, n)) {
            board[row][i] = 1;//prothom e gor niye check korbo.
            solveNQueen(row+1, n);//eivabe sob gor check korbo.
            board[row][i] = 0;//gor chack korar por ami oi gor ke 0 kore dei.
        }
    }
    return 0;
}


int main() {
 int t;
 cin >> t;
 while(t--) {
     int n;
     cin >> n;
     memset(board,0,sizeof board);
     solveNQueen( 0, n);
     cout<<cnt<<endl;//combination koita oita janlam.
     cnt = 0;
      if(x == 0)cout<<-1<<endl;//ektaoyo combination na paile -1 print kori.
      x = 0;
 }
 return Okay;
}
