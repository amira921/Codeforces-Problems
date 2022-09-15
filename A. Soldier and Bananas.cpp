#include <bits/stdc++.h>
using namespace std;

int main(){
   int k,n,w,sum=0;
   cin >> k >> n >> w;
   
   int c=1;
   for (int i=0;i<w;i++){
       sum += (k*c);
       c++;
   }
   sum = sum-n;
   if (sum > 0) cout << sum;
   else cout << 0;
}

 