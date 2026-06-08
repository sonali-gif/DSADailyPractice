// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"no prime";
//             break;
//         }
//          i++;
//     }
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 2;
    while(i < n) {
        if(n % i == 0) {
            cout << "Not prime";
            break;   // stop loop if divisible
        }
        i++;
    }

    // If loop completed without break
   
    return 0;
}