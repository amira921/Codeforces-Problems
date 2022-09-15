#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin >> n;
   
   string words[n];
   for (int i=0;i<n;i++){
      cin >> words[i];
      string temp = words[i],str = "";
      if (temp.size()>10){
        str += temp[0];
        str += to_string(temp.size()-2);
        str += temp[temp.size()-1];
        words[i] = str;
      }
   }
   for (int i=0;i<n;i++)
     cout << words[i] << '\n';
}
 