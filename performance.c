// File : performance.c
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "performance.h"


//===============================================
Performance performanceMake (double time, double s, double r)
{
  assert (time > 0);
  assert (s > 0);
  assert (r > 0);

  return (Performance) {.time0to100 = time, .maximumspeed = s, .range = r};
}

//===============================================
Performance performanceMakeFromFile(FILE *fin)
{
  double time, speed, range;
  fprintf(fin,"%lf %lf %lf",time,speed,range);

  return performanceMake(time, speed, range);
}

//===============================================
double performanceGetTime0To100(Performance performance)
{
  return performance.time0to100;
}

//===============================================
double performanceGetMaximumSpeed(Performance performance)
{
  return performance.maximumspeed;
}

//===============================================
double performanceGetRange(Performance performance)
{
  return performance.range;
}

//===============================================
void performancePrint(Performance performance, FILE * fout)
{
  fprintf(fout,"Performance(%lf,%lf,%lf)",performanceGetTime0To100(performance),performanceGetMaximumSpeed(performance),performanceGetRange(performance));
}
