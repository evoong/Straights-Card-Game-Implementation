#ifndef  _CARD_H_
#define  _CARD_H_

#include <vector>
#include <string>
using namespace std;

class Card{
    string suit;
    string rank;
    int value;
    public:
    Card(string suit, string rank, int value);
    Card(string suit, string rank);
    ~Card();
    string getSuit();
    string getRank();
    int getValue();
    string getCardString();
    bool operator<(Card c);
};

#endif