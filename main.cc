#include <iostream>
#include "Card.h"
#include "Player.h"
#include "CardGame.h"
#include "textDisplay.h"

#include "Computer.h"
#include "Human.h"
using namespace std;


int main(){
    CardGame * cg = new CardGame();
    vector<Player *> pList;
    cout<<"Start 123"<<endl;
    TextDisplay td{cg, pList};
    cg->nextRound(pList);

   for (auto p: pList){
       delete p;
   }
   delete cg;
}