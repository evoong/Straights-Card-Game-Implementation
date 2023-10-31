#ifndef  _COMPUTER_H_
#define  _COMPUTER_H_

#include "Player.h"
#include "iostream"
using namespace std;



class Computer: public Player{
    
    public:

    Computer(CardGame * cg);

   // Computer(CardGame *cg, vector <Card> hand,  vector <Card> discarded,vector <int> score);
    void printType();
    Computer &operator=(Player *rhs);

    void move();

};

#endif