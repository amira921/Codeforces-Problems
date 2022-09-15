#include <bits/stdc++.h>
using namespace std;

int main(){
   vector <int>data;
   int n,num;
   cin >> n ;
   
   for (int i=0;i<n;i++){
        cin >> num;
        data.push_back(num);
    }
    
    sort(data.begin(),data.end());
    
    for (auto x:data)
      cout << x << " ";
}
