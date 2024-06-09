/*PROBLEM: You have 15 coins. You take them to a shop. The shopkeeper says, "For one coin, you can buy one chocolate. You can also use 3 wrappers and buy 1 chocolate."" So, tell using 15 ruppes, how many max chocolates you can eat.

1 coin  = 1 chocolate
3 wrappers = 1 chocolate
*/

#include<iostream>
using namespace std;

int main(){
    int coin = 15;
    int chocolates = coin;
    int wrappers = chocolates;

    int extra_choco = 0;
    while(wrappers >= 3){
        int new_choco = wrappers/3;
        extra_choco += new_choco;
        wrappers = wrappers%3 + new_choco;
    }
    chocolates += extra_choco;
    
    cout << chocolates << endl;
}
