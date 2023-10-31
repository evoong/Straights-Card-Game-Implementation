#include "Player.h"

Player::Player(CardGame * cg): cg{cg} { 
    score.push_back(0);
}

void Player::play(Card c){
    cg->getPile().push_back(c);
    int i = 0;
    for (auto h: hand){       
        if (h.getRank() == c.getRank() && h.getValue() == h.getValue()){
            cg->getDeck().erase(cg->getDeck().begin()+i);
            break;
        }
        i++;
    }   
}
void Player::discard(Card c){
    discarded.push_back(c);
    int i = 0;
    for (auto h: hand){       
        if (h.getRank() == c.getRank() && h.getValue() == h.getValue()){
            hand.erase(hand.begin()+i);
            break;
        }
        i++;
    }   
}

vector<Card> & Player::getHand(){
    return hand;
}

vector<Card> & Player::getDiscarded(){
    return discarded;
}

vector<int> & Player::getScore(){
    return score;
}

Player::~Player(){}

CardGame * Player::getCg(){
    return cg;
}


Player& Player::operator=(Player &rhs){
    if (this == &rhs) return *this;
    cg = rhs.cg;
    hand = rhs.hand;
    discarded = rhs.discarded;
    score = rhs.score;
    return *this;
}
