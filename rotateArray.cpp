#include<bits/stdc++.h>
using namespace std;

int main(){
           
           int n,k;
           cin>> n>> k ;
           k = k%n ;
           vector<int> arr;

           for(int i=0;i<n;i++){
              int x;
              cin>>x ;
              arr.push_back(x) ;
           }
           
           reverse(arr.begin(), arr.end());
           reverse(arr.begin(), arr.begin()+k);
           reverse(arr.begin() + k , arr.end());
           
           for(int i=0;i<n;i++){
                cout<< arr[i] << " " ;
           }

           return 0 ;


}
