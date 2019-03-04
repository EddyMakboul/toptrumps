// File : match.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include "match.h"



//===============================================
void matchInitEmpty(Match *match)
{
 // TODO
}

//===============================================
void matchReadDeckFromFile(Match *match, char *fileName)
{
  deckReadFromFile(&match->deck, fileName);
}

//===============================================
void matchDeckShuffle(Match *match)
{
  deckShuffle(&match->deck);
 }

//===============================================
void matchHandOutCards(Match *match)
{
 // TODO
}

//===============================================
int matchNumberOfActivePlayers(Match *match)
{
 // TODO
}

//===============================================
void matchPlayATrick(Match *match, Category category, char *fileName)
{
 // TODO
}

//===============================================
void matchPlay(Match *match, char *fileName)
{
 // TODO
}

//===============================================
void matchWriteLog(Match *match, Card *cards[], int numberOfPlayers, Category category, int winner, char * fileName)
{
 // TODO
}

//===============================================
void matchClean(Match *match)
{
 // TODO
}

