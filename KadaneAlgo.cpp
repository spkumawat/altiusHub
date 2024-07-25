#include<bits/stdc++.h>
using namespace std;

int main(){
           
           int n;
           cin>> n  ; 

           vector<int> arr;

           for(int i=0;i<n;i++){
              int x;
              cin>>x ;
              arr.push_back(x) ;
           }

           int sum =0;
           int ans  =arr[0];

           for(int i=0;i< n;i++){
               
                  if(sum  <=0){
                       sum =0 ;
                  }

                  sum = sum + arr[i] ;
                  ans = max(ans, sum) ;
           }

           cout<< ans  ; 


           return 0 ;


}
