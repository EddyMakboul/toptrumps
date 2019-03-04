// File : engine.h
#ifndef ENGINE_H
#define ENGINE_H

typedef enum Fuel{
	ELECTRIC, GASOLINE, DIESEL
} Fuel;

char const * fuelToString(Fuel f);
Fuel fuelFromString(char * s);

typedef struct Engine {
  Fuel fuel;
  int power;
  int torque;
} Engine;

Engine engineMake (Fuel f, int p, int t);
Engine engineMakeFromFile (FILE * fin);

Fuel engineGetFuel (Engine engine);
int engineGetPower (Engine engine);
int engineGetTorque (Engine engine);
void enginePrint(Engine engine, FILE * fout);

#endif
