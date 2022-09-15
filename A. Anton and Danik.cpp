#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum_A=0,sum_D=0;
    char c;
    cin >> n;
    
    for (int i=0;i<n;i++){
       cin >> c;
       if (c == 'A') sum_A++;
       else sum_D++;
    }
    if (sum_A > sum_D) cout << "Anton";
    else if (sum_D > sum_A) cout << "Danik";
    else if (sum_D == sum_A) cout << "Friendship";
}