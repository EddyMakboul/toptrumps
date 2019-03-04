// File : hand.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include "hand.h"
#include "card.h"
#include "car.h"


//===============================================
void handInitEmpty(Hand *self)
{
  cardListInitEmpty(&self->list);
}

//===============================================
bool handIsEmpty(Hand *self)
{
  return cardListIsEmpty(&self->list);
}

//===============================================
int handGetLength(Hand *self)
{
 return cardListGetLength(&self->list);
}

//===============================================
void handAddCard(Hand *self, Card *card)
{
  cardListAddLast(&self->list, card);
}

//===============================================
Card * handRemoveCard(Hand *self, Card *card)
{
  return cardListRemoveCard(&self->list, card);
}

//===============================================
Card * handGetBestCard(Hand *self, Category category)
{
 // TODO
}

//===============================================
void handClean(Hand *self)
{
  cardListClean(&self->list);
}
