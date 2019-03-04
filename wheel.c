// File : wheel.c
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "wheel.h"

//===============================================
char const * materialToString(Material m)
{
  static char *materialname[]={"Steel", "Aluminum"};

  return materialname[m];
}

//===============================================
Material materialFromString(char * s)
{
  if (!strcmp(s,"Steel"))
    return STEEL;
  if (!strcmp(s,"Aluminum"))
    return ALUMINUM;
}
 //===============================================
Wheel wheelMake(Material m, int d)
{
  assert (d >= 14 && d <= 20);
  assert((m == STEEL) || (m == ALUMINUM));
  return (Wheel) {.material = m, .diameter = d};
}

//===============================================
Wheel wheelMakeFromFile(FILE * fin)
{
  char stringMaterial[9];
  int diameter;
  fscanf(fin,"%s %d",stringMaterial,&diameter);
  return wheelMake(materialFromString(stringMaterial), diameter);
}

//===============================================
Material wheelGetMaterial(Wheel wheel)
{
  return wheel.material;
}

//===============================================
int wheelGetDiameter(Wheel wheel)
{
  return wheel.diameter;
}

//===============================================
void wheelPrint(Wheel wheel, FILE * fout)
{

	fprintf(fout, "Wheel(%s,%d)\n",materialFromString(wheelGetMaterial(wheel)),wheelGetDiameter(wheel);

}
