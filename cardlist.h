// File : cardlist.h
#ifndef CARDLIST_H
#define CARDLIST_H

#include "card.h"

typedef struct CardList {
  int length;
  Card * head;
  Card * tail;
} CardList;

void cardListInitEmpty (CardList * self);
bool cardListIsEmpty (CardList * self);
int  cardListGetLength (CardList * self);
void cardListAddLast (CardList * self, Card * card);

Card * cardListRemoveCard(CardList * self, Card * card);
Card * cardListRemoveFirst (CardList * self);
Card * cardListRemoveLast (CardList * self);

bool cardListIndexIsValid (CardList * self, int index);
Card * cardListGetCardAt(CardList * self, int index);

void cardListReadFromFile(CardList * self, char * fileName);
void cardListPrint(CardList * self, FILE *fout);
void cardListClean(CardList * self);

#endif
