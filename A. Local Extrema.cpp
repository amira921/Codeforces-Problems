#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   int nums[n];
   for (int i=0;i<n;i++)
      cin >> nums[i];
     
    int extrema=0;
    for (int i=1;i<n-1;i++){
        if (nums[i] < nums[i-1] && nums[i] < nums[i+1])
           extrema++;
        else if (nums[i] > nums[i-1] && nums[i] > nums[i+1])
           extrema++;
    }
    cout << extrema;
}
