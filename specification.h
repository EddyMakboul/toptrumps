// File : specification.h
#ifndef SPECIFICATION_H
#define SPECIFICATION_H
#include "wheel.h"
#include "engine.h"

typedef struct Specification {
  int color[3]; // RGB [0..255]
  Wheel wheel;
  Engine engine;
} Specification;

Specification specificationMake (int c[3], Wheel w, Engine e);
Specification specificationMakeFromFile (FILE * fin);

Wheel specificationGetWheel (Specification specification);
Engine specificationGetEngine (Specification specification);
void specificationGetColor (Specification specification, int color[3]);
void specificationPrint(Specification specification, FILE * fout);

#endif
