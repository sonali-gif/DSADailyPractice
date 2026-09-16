#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();//5
   cout<< st.top()<<endl;//4

   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   q.pop();//1
   cout<< q.front();//2
   
}