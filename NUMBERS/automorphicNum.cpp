//Automorphic number-number whose square ends with the same digits as the number itself.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int square = n * n;
    bool flag = true;
    //checking condition
    while(n > 0){ 
        if(n % 10 != square % 10){
            flag = false;
            break;
        }
        n = n / 10;
        square = square / 10;
    }
    if(flag){
        cout << "Automorphic";
    }
    else{
        cout << "Not Automorphic";
    }
    return 0;
}