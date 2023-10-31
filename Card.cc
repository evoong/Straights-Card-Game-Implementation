#include "Card.h"

Card::Card(string suit, string rank, int value): suit{suit}, rank{rank}, value{value}{}
Card::Card(string suit, string rank): suit{suit}, rank{rank}{}
string Card::getSuit(){return suit;}
string Card::getRank(){return rank;}
string Card::getCardString(){return rank+suit;}
int Card::getValue(){return value;}
Card::~Card(){}

bool Card::operator<(Card c){
    return this->getValue() < c.getValue();
}