#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,h,sum=0,num;
    cin >> n >> h ;
    
    for (int i=0;i<n;i++){
       cin >> num;
       if (num>h) sum+=2;
       else sum+=1;
    }
    cout << sum;
}