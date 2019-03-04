// File : specification.c
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "specification.h"

//===============================================
Specification specificationMake (int c[3], Wheel w, Engine e)
{
  for(int i=0; i<3; i++)
    assert(c[i]>=0 && c[i]<=255);

  return (Specification) {.color[0] = c[0], .color[1] = c[1], .color[2] = c[2], .wheel = w, .engine = e};
}

//===============================================
Specification specificationMakeFromFile (FILE * fin)
{
  int color[3];
  fscanf(fin,"%d",color);
  Wheel wheel = wheelMakeFromFile(fin);
  Engine engine = engineMakeFromFile(fin);

  return specificationMake(color, wheel, engine);
}

//===============================================
Wheel specificationGetWheel (Specification specification)
{
  return specification.wheel;
}

//===============================================
Engine specificationGetEngine (Specification specification)
{
  return specification.engine;
}

//===============================================
void specificationGetColor (Specification specification, int color[3])
{
  for (int i=0; i<3; i++)
    color[i] = specification.color[i];
  return;
}

//===============================================
void specificationPrint(Specification specification, FILE * fout)
{
  fprintf(fout, "%s\n","Specificaion:");
  fprintf(fout,"%d\n",specification.color);
  wheelPrint(specification.wheel,fout);
  enginePrint(specification.engine,fout);
}
