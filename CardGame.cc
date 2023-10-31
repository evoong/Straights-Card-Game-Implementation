#include "CardGame.h"
#include "Player.h"

CardGame::CardGame(){
    makeDeck();
}

void CardGame::makeDeck(){
    vector<string> suits = {"A", "S", "H", "C"};
    vector<string> ranks = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K"};
    for (auto &s: suits){
        int i = 1;
        for (auto &r: ranks){
            deck.emplace_back(s, r, i++);
        }
    }
}

void CardGame::shuffleDeck(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine rng{seed};
    shuffle(deck.begin(),deck.end(),rng );
}

void CardGame::deal(Player * p){
    p->getHand().push_back(deck.back());
    deck.pop_back();   
}

void CardGame::nextRound(){
    this->deck.clear();
    this->pile.clear();
    this->makeDeck();
    this->shuffleDeck();
    for (auto p: pList){
        for (int j = 0; j < 7; j++){
            this->deal(p);
        }
    }
}

 vector<Card> & CardGame::getDeck(){
     return deck;
 }

vector<Card> & CardGame::getPile(){
    return pile;
}


void CardGame::firstPlayer(){
    int i = 0;
    for (auto p: pList){
        for(auto c: p->getHand()){
            if (c.getSuit() == "S" && c.getRank() == "7"){
                currP = i;
                break;
            }
        }
        ++i;
    }
}

int CardGame::getCurrP(){
    return currP;
}

void CardGame::nextPlayer(){
    if (currP < 4){
         ++currP;
     } else {
        currP = 1;
    }
}

void CardGame::endGame(){
    this->end = true;
}

bool CardGame::isEnded(){
    return end;
}
/*
void CardGame::rageQuit(){
    Computer newComp{pList[currP]->getCg(), pList[currP]->getTd()};
    newComp = pList[currP];
    delete pList[currP];
    pList[currP] = &newComp;
}


*/
CardGame::~CardGame(){}