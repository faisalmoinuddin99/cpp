#include<bits/stdc++.h>
#include<vector>

using namespace std ;

int main(){

   vector<int> a ;

    a.push_back(-1) ;
    a.push_back(6) ;
    a.push_back(2) ;
    a.push_back(-4) ;
    a.push_back(3) ;
    a.push_back(7) ;
    a.push_back(9) ;
    a.push_back(11) ;
    a.push_back(5) ;
    int target ;
    cin >> target ;
   for(int i = 0; i < a.size()-1; i++){
    for(int j = i + 1; j < a.size() - 1; j++){
        if(a[i] + a[j] == target){
            cout<< i << " " << j ;
        } 
    }
   }
   cout<<endl ;
}