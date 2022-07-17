#include<bits/stdc++.h>
#include<string>

using namespace std ;

bool isValid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || 
    (ch >= '0' && ch <= '9')){
        return true ;
    } else {
        return false ;
    }
}
void removeCharAndSpace(string sen) {
    int start = 0;
    int end = sen.length() - 1 ;
    while(start <= end) {
        if(!isValid(sen[start])) {
            start++ ;
            continue ;
        }
        else{
            cout<<sen[start] ;
            start++ ;
        }
    }
    cout<<"\n" ;
}
int main(){

    string sentence = "N2 i&nJA?a& jnI2n" ;
    // cout<<"Raw Sentence: "<<sentence <<'\n';
    removeCharAndSpace(sentence) ;
    return 0 ;
}