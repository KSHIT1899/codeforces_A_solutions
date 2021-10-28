#include <bits/stdc++.h>
using namespace std;
#define long long int
int unboundedknapsack(vector<int> &coins,int w,int n){
   int t[n+1][w+1];
   // 1st Initialization
   for(int i=0;i<n+1;i++){
      for(int j=0;j<w+1;j++){
         if(j==0){
            t[i][j]=0;
         }
         if(i==0){
            t[i][j]=INT_MIN;
         }
      }
   }
   // 2nd Initialization
   for(int j=1;j<w+1;j++){
      if(j%coins[0]){
         t[1][j]=INT_MIN;
      }
      else{
         t[1][j]=j/coins[0];
      }
   }
   // Choice Diagram
   for(int i=2;i<n+1;i++){
      for(int j=1;j<w+1;j++){
         if(coins[i-1]<=j){
            t[i][j]=max(1+t[i][j-coins[i-1]],t[i-1][j]);
         }
         else{
            t[i][j]=t[i-1][j];
         }
      }
   }
   return t[n][w];
}
int main(){
   int n;
   cin>>n;
   vector<int>coins(3);
   for(auto &it:coins){
     cin>>it;
   }
   cout<<unboundedknapsack(coins,n,3);
   return 0;
}
