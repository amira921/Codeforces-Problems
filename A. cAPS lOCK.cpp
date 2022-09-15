#include <bits/stdc++.h>
using namespace std;

int main(){
   string str;
   cin >> str;
   
   bool first=0;
   if (str[0]>='a'&& str[0]<='z') first=1;
   
   int count=0;
   for (int i=1;i<str.size();i++){
       if (str[i]>='A'&& str[i]<='Z')
          count++;
   }
   if (first && str.size()==1){
       str[0] = toupper(str[0]);
   }
   else if (first && count==str.size()-1){
       str[0] = toupper(str[0]);
       for(int i=1;i<str.size();i++)
          str[i] = tolower(str[i]);
   }
   else if (!first && count==str.size()-1){
       for(int i=0;i<str.size();i++)
          str[i] = tolower(str[i]);
   }
   cout << str; 
}

 