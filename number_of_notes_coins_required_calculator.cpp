#include <iostream>
using namespace std;

int main(){
    int amount;
    cout <<"Please enter the amount" << endl;
    cin>>amount;
    int hundred_notes;
    int fifty_notes;
    int twenty_notes;
    int one_coin;
    int fivehundred_notes;
    int twohundred_notes;
    int ten_notes;
    int five_coins;
    int two_coins;
    
    switch (1)
    {

    case 1: if((amount/500) >=0){
    fivehundred_notes = amount/500;
    amount = amount - 500*fivehundred_notes; }
    else{
        fivehundred_notes = 0;
    }
    
    case 2: if((amount/200) >=0){
    twohundred_notes = amount/200;
    amount = amount - 200*twohundred_notes; }
    else{
        twohundred_notes = 0;
    }

    case 3: if((amount/100) >=0){
            hundred_notes = amount/100;
            amount = amount - 100*hundred_notes; }
            else{
                hundred_notes = 0;
            }

    case 4: if((amount / 50) >=0){
             fifty_notes = amount/50;
             amount = amount - 50*fifty_notes;}
             else{
                fifty_notes = 0;
             }

    case 5: if((amount / 20) >=0){
             twenty_notes = amount/20;
             amount = amount - 20*twenty_notes;}
             else{
                twenty_notes = 0;
             }
    case 6: if((amount / 10) >=0){
             ten_notes = amount/10;
             amount = amount - 10*ten_notes;}
             else{
                ten_notes = 0;
             }
    case 7: if((amount / 5) >=0){
             five_coins = amount/5;
             amount = amount - 5*five_coins;}
             else{
                five_coins = 0;
             }
    case 8: if((amount / 2) >=0){
             two_coins = amount/2;
             amount = amount - 2*two_coins;}
             else{
                two_coins = 0;
             }

    default : one_coin = amount;

    }

    cout <<"500 rupees notes are "<< fivehundred_notes<< endl<< "200 rupees notes are "<< twohundred_notes<< endl<< "100 rupees notes are " << hundred_notes << endl<< "50 rupees notes are " << fifty_notes << endl<< "20 rupees notes are " << twenty_notes << endl<< "10 rupees notes are "<< ten_notes<< endl<< "5 rupee coins are"<< five_coins<< endl<< "2 rupee coins are "<< two_coins<< endl<< "one rupee coins are "<< one_coin << endl;
        return 0;
}