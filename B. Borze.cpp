#include <bits/stdc++.h>
using namespace std;

int main(){
   string str,s="";
   cin >> str;
   
   for (int i=0;i<str.size();i++){
       if (str[i]=='.') s+='0';
       else if (str[i]== '-' && str[i+1]=='.'){ 
           s+='1';
           i++;
       }else if (str[i]== '-' && str[i+1]=='-'){
           s+='2';
           i++;
       }
   }
   cout << s;
}