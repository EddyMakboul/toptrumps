// File : match.h
#ifndef MATCH_H
#define MATCH_H
#include "cardlist.h"
#include "deck.h"
#include "hand.h"

#define NB_PLAYERS 2

typedef struct Match{
  Deck deck;
  Hand player[NB_PLAYERS];
} Match;

void matchInitEmpty(Match *match);
void matchReadDeckFromFile(Match *match, char *fileName);
void matchDeckShuffle(Match *match);
void matchHandOutCards(Match *match);
int matchNumberOfActivePlayers(Match *match);
void matchPlayATrick(Match *match, Category category, char *fileName);
void matchPlay(Match *match, char *fileName);
void matchWriteLog(Match *match, Card *cards[], int numberOfPlayers, Category category, int winner, char * fileName);
void matchClean(Match *match);
#endif
