#include<bits/stdc++.h>
using namespace std;

int num[] = {3, 4, 5};
int rem[] = {2, 3, 1};

int findMinRem( int k){
    int x = 1;
    while (true){
        int j;
        for (j=0; j<k; j++ ){
            if (x%num[j] != rem[j])break;
        }
        if (j == k)return x;
        x++;
    }
    return x;
}

int main(){

    int k = 3;
    cout << "Min rem is " << findMinRem(k);
    return 0;
}
