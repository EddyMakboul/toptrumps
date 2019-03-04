// File : cardlist.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include "card.h"
#include "car.h"
#include "cardlist.h"


//===============================================
void cardListInitEmpty (CardList * self)
{
 // TODO
}

//===============================================
bool cardListIsEmpty (CardList * self)
{
 // TODO
}

//===============================================
int cardListGetLength(CardList * self)
{
 // TODO
}
//===============================================
void cardListAddLast (CardList * self, Card * card)
{
 // TODO
}

//===============================================
Card * cardListRemoveCard (CardList * self, Card * card)
{
  assert (!cardListIsEmpty(self));
  assert (card != NULL);

 // TODO

  return card;
}

//===============================================
Card * cardListRemoveFirst (CardList * self)
{
 // TODO
}


//===============================================
Card * cardListRemoveLast (CardList * self)
{
 // TODO
}

//===============================================
bool cardListIndexIsValid (CardList * self, int index)
{
 // TODO
}

//===============================================
Card * cardListGetCardAt(CardList * self, int index)
{
  assert (cardListIndexIsValid(self, index));

 // TODO

}

//===============================================
void cardListReadFromFile(CardList * self, char * fileName)
{
 // TODO
}

//===============================================
void cardListPrint(CardList * self, FILE *fout)
{
 // TODO
}

//===============================================
void cardListClean(CardList * self)
{
 // TODO
}
