// File : hand.h
#ifndef HAND_H
#define HAND_H

#include "card.h"
#include "cardlist.h"

typedef struct Hand {CardList list ;} Hand;

void handInitEmpty(Hand *self);
bool handIsEmpty(Hand *self);
int  handGetLength(Hand *self);
void handAddCard(Hand *self, Card *card);
Card * handRemoveCard(Hand *self, Card *card);
Card * handGetBestCard(Hand *self, Category category);
void handClean(Hand * self);

#endif
