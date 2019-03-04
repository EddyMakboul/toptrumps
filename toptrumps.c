#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "match.h"

int main(int argc, char *argv[])
{
  if (argc < 3){
    printf("Usage : toptrumps carsdatabase_file log_file");
    exit (EXIT_FAILURE);
  }

  Match match;

  matchInitEmpty(&match);
  matchReadDeckFromFile(&match, argv[1]);
  printf("Deck readed from file %s\n", argv[1]);
  matchDeckShuffle(&match);
  printf("Deck shuffle\n", argv[1]);
  matchHandOutCards(&match);
  printf("Hand out cards\n");
  printf("Starting play\n");
  matchPlay(&match, argv[2]);
  printf("Log written in file %s\n", argv[2]);
  printf("Finish\n");
  matchClean(&match);

  exit(EXIT_SUCCESS);
}
