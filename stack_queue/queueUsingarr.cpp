#include<bits/stdc++.h>
using namespace std;
class queImp{
    public:
   int size=10;
   int strt =-1;
   int end=-1;
   int currSize=0;
   int arr[10];

   void push(int x){
    if(currSize==size){
        cout<<"queue is full";
        return;
    }
    if(currSize==0){
        strt=0;
        end=0;
        arr[end] = x;
        currSize++;
    }else{
        end=(end+1)% size;
        arr[end]=x;
        currSize++;
    }
   }

   int pop(){
    if(currSize==0){
        cout<<"empty";
        return -1;
    }
   int el=arr[strt];
   if(currSize==1){
    strt =-1;
    end=-1;
   }else{
    strt=(strt+1)%size;
   }currSize--;
    return el;
   
   }

   int top(){
    if(currSize==0){
        cout<<"empty";
        return -1;
    }

    return arr[strt];
   }

   int sizee(){
    return currSize;
   }
};
int main(){
    queImp q;
    q.push(2);
    q.push(6);
    q.push(8);
    q.pop();
    cout<<q.top()<<endl;
    cout<<q.sizee();
    return 0;
}