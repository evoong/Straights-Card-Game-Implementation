#ifndef  _CARDGAME_H_
#define  _CARDGAME_H_

#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>
#include "Card.h"
using namespace std;

class Player;

class CardGame{
    vector<Card> deck;
    vector<Card> pile;
    int currP;
    bool end = false;
    vector <Player *> pList;
    
    
public:
    CardGame();
    void makeDeck();
    void shuffleDeck();
    void deal (Player * p);
    void nextRound();
    void firstPlayer();
    int getCurrP();
    void nextPlayer();
    vector<Card> & getDeck();
    vector<Card> & getPile();
    void endGame();
    bool isEnded();

    ~CardGame();

};


#endif