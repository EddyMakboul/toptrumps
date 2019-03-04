// File : engine.c
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "engine.h"

//===============================================
char const * fuelToString(Fuel f)
{
  char *fuelname[]={"Electric", "Gasoline", "Diesel"};

  return fuelname[f];
}

//===============================================
Fuel fuelFromString(char * s)
{
  if (!strcmp(s,"Electric"))
    return ELECTRIC;
  if (!strcmp(s,"Gasoline"))
    return GASOLINE;
  if (!strcmp(s,"Diesel"))
    return DIESEL;
}

//===============================================
Engine engineMake(Fuel f, int p, int t)
{
  assert (p > 0);
  assert (t > 0);
  assert ((f==ELECTRIC) || (f==GASOLINE) || (f==DIESEL));
  return (Engine) {.fuel = f, .power = p, .torque = t};
}

//===============================================
Engine engineMakeFromFile(FILE * fin)
{
  char stringFuel[9];
  int power, torque;
  fscanf(fin,"%s %d %d",stringFuel,&power,&torque);

  return engineMake(fuelFromString(stringFuel), power, torque);
}

//===============================================
Fuel engineGetFuel (Engine engine)
{
  return engine.fuel;
}

//===============================================
int engineGetPower (Engine engine)
{
  return engine.power;
}

//===============================================
int engineGetTorque (Engine engine)
{
  return engine.torque;
}

//===============================================
void enginePrint(Engine engine, FILE * fout)
{

	fprintf(fout,"Engine(%s,%d,%d)",fuelToString(engineGetFuel(engine)),engineGetPower(engine),engineGetTorque(engine));
}
