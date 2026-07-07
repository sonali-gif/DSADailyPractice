//There are total n number of Monkeys sitting on the branches of a huge Tree.
// As travelers offer Bananas and Peanuts, the Monkeys jump down the Tree. 
//If every Monkey can eat k Bananas and j Peanuts. 
//If total m number of Bananas and p number of Peanuts are offered by travelers, calculate how many Monkeys remain on the Tree after some of them jumped down to eat.
// At a time one Monkeys gets down and finishes eating and go to the other side of the road. 
//The Monkey who climbed down does not climb up again after eating until the other Monkeys finish eating.
// Monkey can either eat k Bananas or j Peanuts. 
//If for last Monkey there are less than k Bananas left on the ground or less than j Peanuts left on the ground, only that Monkey can eat Bananas(<k) along with the Peanuts(<j).
// Write code to take inputs as n, m, p, k, j and return the number of Monkeys left on the Tree.
// "Where, n= Total no of Monkeys
// k= Number of eatable Bananas by Single Monkey (Monkey that jumped down last may get less than k Bananas)
// j= Number of eatable Peanuts by single Monk (Monkey that jumped down last may get less than j Peanuts)
// m = Total number of Bananas
// p=Total number of Peanuts
// Remember that the Monkeys always eat Bananas and Peanuts, so there is no possibility of k and j having a value zero. 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,j,m,p;
    if(!(cin>>n>>k>>j>>m>>p))return 0;
    if (n < 0 || k <= 0 || j <= 0 || m < 0 || p < 0) {
        cout << "INVALID INPUT" << endl;
        return 0;
    }
    int mon_ban =m/k;//1 mnkey how many banana
    int rem_bana=m%k;//remaining banana
    int mon_pea=p/j;//1 monkey how many peanut
    int rem_pea=p%j;//remaining peanut

    if(rem_bana!=0){
        mon_ban+=1;
    }
    if(rem_pea!=0){
        mon_pea+=1;
    }

    int left =n-(mon_pea+mon_ban);
    
    if(left<0){   
        left=0;
    }
    cout<<left<<endl;
return 0;
}