// File : car.c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "car.h"

//===============================================
char const * categoryToString(Category c)
{
  static char * categoryname[]={"Production Year", "Price", "Wheel Diameter", "Engine Power", "Engine Torque", "Performance Time", "Performance Maximum Speed", "Performance Range"};

  return categoryname[c];
}

//===============================================
char const * manufacturerToString(Manufacturer m)
{
  static char * manufacturername[]={"Renault", "Peugeot", "Citroen"};

  return manufacturername[m];
}

//===============================================
Manufacturer manufacturerFromString(char * s)
{
  if(!strcmp(s,"Renault"))
    return RENAULT;
  if(!strcmp(s,"Peugeot"))
    return PEUGEOT;
  if(!strcmp(s,"Citroen"))
    return CITROEN;

}

//===============================================
char const * modelToString(Model m)
{
  static char * modelname[]={"Zoe","Twingo", "Clio", "Megane", "108", "208", "308", "508", "C_ZERO", "C1", "C3", "C4"};

  return modelname[m];
}

//===============================================
Model modelFromString(char * s)
{
  if(!strcmp(s,"Zoe"))
    return ZOE;
  if(!strcmp(s,"Twingo"))
    return TWINGO;
  if(!strcmp(s,"Clio"))
    return CLIO;
  if(!strcmp(s,"Megane"))
    return MEGANE;
  if(!strcmp(s,"108"))
    return P108;
  if(!strcmp(s,"208"))
    return P208;
  if(!strcmp(s,"308"))
    return P308;
  if(!strcmp(s,"508"))
    return P508;
  if(!strcmp(s,"C_ZERO"))
    return C_ZERO;
  if(!strcmp(s,"C1"))
    return C1;
  if(!strcmp(s,"C3"))
    return C3;
  if(!strcmp(s,"C4"))
    return C4;
}

//===============================================
Car carMake (Manufacturer man, Model mod, int py, double p, Specification spec, Performance perf)
{
  assert (py>=2010 && py<=2019);
  assert (p > 0);

  return (Car) {.manufacturer = man, .model = mod, .productionyear = py, .price = p, .specification = spec, .performance = perf};
}

//===============================================
Car carMakeFromFile(FILE * fin)
{
  char stringManufactuer[8];
  char stringModel[7];
  int productionyear;
  double price;

  fscanf(fin,"%d %lf",&productionyear,&price);
  Specification spec = specificationMakeFromFile(fin);
  Performance perf = performanceMakeFromFile(fin);
  return carMake(manufacturerFromString(stringManufactuer), modelFromString(stringModel), productionyear, price, spec, perf);
}

//===============================================
Manufacturer carGetManufacturer (Car car)
{
  return car.manufacturer;
}

//===============================================
Model carGetModel (Car car)
{
  return car.model;
}

//===============================================
int carGetProductionYear (Car car)
{
  return car.productionyear;
}

//===============================================
double carGetPrice (Car car)
{
  return car.price;
}

//===============================================
Specification carGetSpecification (Car car)
{
  return car.specification;
}

//===============================================
Performance carGetPerformance (Car car)
{
  return car.performance;
}

//===============================================
void carPrint(Car car, FILE * fout)
{
	fprintf(fout,"%s\n","Car : (Manufacturer Model productionYear price)");
  specificationPrint(car.specification,fout);
  performancePrint(car.performance,fout);
}
