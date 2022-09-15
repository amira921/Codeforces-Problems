#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   int data[n];
   for(int i=0;i<n;i++)
       cin >> data[i];
       
   int chest=0,biceps=0,back=0,size = (n/3)*3;
   for (int i=0;i<size;i+=3){
       chest += data[i];
       biceps += data[i+1];
       back += data[i+2];
   }
   
   int remain = n%3;
   if (remain == 1) chest += data[size++];
   else if (remain==2){ chest += data[size++];biceps+=data[size++];}
   
   if (chest>biceps && chest>back) cout << "chest";
   else if (biceps>chest && biceps>back) cout << "biceps";
   else cout << "back";
   
}