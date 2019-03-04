// File : performance.h
#ifndef PERFORMANCE_H
#define PERFORMANCE_H

typedef struct Performance {
  double time0to100;
  double maximumspeed;
  double range;
} Performance;

Performance performanceMake (double time, double s, double r);
Performance performanceMakeFromFile (FILE *fin);

double performanceGetTime0To100(Performance performance);
double performanceGetMaximumSpeed(Performance performance);
double performanceGetRange(Performance performance);
void performancePrint(Performance performance, FILE * fout);


#endif
