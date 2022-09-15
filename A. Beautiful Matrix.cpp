#include <bits/stdc++.h>
using namespace std;

int main(){
   int data[5][5],sum=0;
   
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> data[i][j];
            if (data[i][j]==1){
                sum = abs(2-i)+abs(2-j);
                break;
            }
        }
    }
    cout << sum;
}
