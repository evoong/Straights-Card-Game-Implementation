#ifndef  _PLAYER_H_
#define  _PLAYER_H_

#include <vector>
#include "Card.h"
#include "CardGame.h"
#include "textDisplay.h"

using namespace std;

class Player{
    CardGame * cg;
    vector <Card> hand;
    vector <Card> discarded;
    vector <int> score;
  
    
public:
    Player(CardGame * cg);
    void play(Card c);
    void discard(Card c);
    virtual void move() = 0;
    vector <Card> & getHand();
    vector <Card> & getDiscarded();
    vector <int> & getScore();
    CardGame * getCg();

    
    virtual void printType() = 0;
    virtual ~Player() = 0;
    
    Player& operator=(Player &rhs);

    
};


#endif
