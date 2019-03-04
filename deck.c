// File : deck.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include "deck.h"
#include "card.h"
#include "car.h"

//===============================================
void deckInitEmpty(Deck *self)
{
  cardListInitEmpty(&self->list);
}

//===============================================
bool deckIsEmpty(Deck *self)
{
  return cardListIsEmpty(&self->list);
}


//===============================================
void deckReadFromFile(Deck *self, char * fileName)
{
  cardListReadFromFile(&self->list, fileName);
}

//===============================================
void deckShuffle(Deck *self)
{
 // TODO
}

//===============================================
Card * deckRemoveCard(Deck *self)
{
  return cardListRemoveLast(&self->list);
}

//===============================================
void deckClean(Deck *self)
{
  cardListClean(&self->list);
}

