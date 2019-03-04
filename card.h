// File : card.h
#ifndef CARD_H
#define CARD_H
#include "car.h"



typedef struct Card {
  Car car;
  struct Card * next;
  struct Card * prev;
} Card;

Card * cardCreate(Car c);
void cardDestroy(Card *c);

int cardGetIndexOfHigestProductionYear(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestPrice(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestWheelDiameter(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestEnginePower(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestEngineTorque(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestPerformanceTime(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestPerformanceMaximumSpeed(Card *cards[], int numberOfCards);
int cardGetIndexOfHigestPerformanceRange(Card *cards[], int numberOfCards);


int cardGetIndexOfHigestByCategory(Card *cards[], int numberOfCards, Category category);

#endif
