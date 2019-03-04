// File : car.h
#ifndef CAR_H
#define CAR_H
#include "specification.h"
#include "performance.h"

#define NB_CATEGORIES 8

typedef enum Category{
  PRODUCTIONYEAR, PRICE, WHEEL_DIAMETER, ENGINE_POWER, ENGINE_TORQUE, PERFORMANCE_TIME, PERFORMANCE_MAXIMUM_SPEED, PERFORMANCE_RANGE
} Category;

char const * categoryToString(Category c);

typedef enum Manufacturer{
	RENAULT, PEUGEOT, CITROEN
} Manufacturer;

char const * manufacturerToString(Manufacturer m);
Manufacturer manufacturerFromString(char * s);

typedef enum Model{
	ZOE, TWINGO, CLIO, MEGANE, P108, P208, P308, P508, C_ZERO, C1, C3, C4
} Model;

char const * modelToString(Model m);
Model modelFromString(char * s);

typedef struct Car {
  Manufacturer manufacturer;
  Model model;
  int productionyear;
  double price;
  Specification specification;
  Performance performance;
} Car;

Car carMake (Manufacturer man, Model mod, int py, double p, Specification spec, Performance perf);
Car carMakeFromFile(FILE * fin);

Manufacturer carGetManufacturer (Car car);
Model carGetModel (Car car);
int carGetProductionYear (Car car);
double carGetPrice (Car car);
Specification carGetSpecification (Car car);
Performance carGetPerformance (Car car);
void carPrint(Car car, FILE * fout);

#endif
