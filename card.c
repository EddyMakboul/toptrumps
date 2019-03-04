// File : card.c
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "card.h"

//===============================================
Card * cardCreate(Car c)
{
  Card *card= malloc(sizeof(Car));
  card->car=c;
  card->next=NULL;
  card->prev=NULL;
}

//===============================================
void cardDestroy(Card *c)
{
 free(c);
}

//===============================================
int cardGetIndexOfHigestProductionYear(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestPrice(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestWheelDiameter(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestEnginePower(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestEngineTorque(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestPerformanceTime(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestPerformanceMaximumSpeed(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestPerformanceRange(Card *cards[], int numberOfCards)
{
 // TODO
}

//===============================================
int cardGetIndexOfHigestByCategory(Card *cards[], int numberOfCards, Category category)
{
 // TODO
}
