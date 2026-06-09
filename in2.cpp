#include<iostream>
using namespace std;
int main(){
   string a= "sonali";
   int l=0;
   int r= a.length() -1;
   while(l<r){
    swap(a[l], a[r]);
    l++;
    r--;
   }
}