// Programmer: ANDREW REIDMEYER  Date: 5-19-11
// File stat.h
// Descr:

#ifndef STAT_H
#define STAT_H

#include <cmath>
#include "image.h"
#include <stdio.h>

#define SIZE 48

class stat
{
  friend class error;
  public:
  stat();
  
  void update();
  
  void setBounds(int xmin,int xmax,int ymin,int ymax);
  void saveFilter(const char *filename); 
  void loadFilter(const char *filename);

  image* in;
  image out;
  image out2;
  
  bool drawBounds;
  bool reset;
  bool enabled;
  bool save;
  bool load;
  
  int xMin,xMax,yMin,yMax;
  private:
  
  long long lev[IMAGE_WIDTH]; //lev refers to level or brightness

  long long chr[IMAGE_HEIGHT][IMAGE_WIDTH];//chr refers to chromaticity 
  
  long long max;
  long long maxi;
  
  long long chrmax;
  

};

#endif