#include "Computer.h"
Computer::Computer(CardGame *cg): Player{cg}{
}
/*
Computer::Computer(CardGame *cg, vector <Card> hand,  vector <Card> discarded,vector <int> score ): 
    Player{cg,hand,discarded,score}{}
*/

void Computer::printType(){
    cout<< "Comp"<<endl;
}
Computer &Computer::operator=(Player * rhs){
    Player::operator=(*rhs);
    return *this;
}

void Computer::move(){}
/*
Computer &Computer::operator=(Player &rhs){
    Player::operator=(rhs);
    return *this;
}

Computer &Computer::operator=(Player &&rhs){
    Player::operator=(rhs);
    return *this;
}
*/
