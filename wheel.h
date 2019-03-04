// File : wheel.h
#ifndef WHEEL_H
#define WHEEL_H

typedef enum Material{
	STEEL, ALUMINUM
} Material;

char const * materialToString(Material m);
Material materialFromString(char * s);

typedef struct Wheel {
  Material material;
  int diameter;
} Wheel;

Wheel wheelMake (Material m, int d);
Wheel wheelMakeFromFile(FILE * fin);

Material wheelGetMaterial(Wheel wheel);
int wheelGetDiameter(Wheel wheel);
void wheelPrint(Wheel wheel, FILE * fout);


#endif
