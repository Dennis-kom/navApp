#pragma once
#ifndef MAP_H
#define MAP_H
#include "glob.h"

struct point { int row; int col; double hight; int type; char name[20]; bit wayFlag; };
typedef struct point point;

point map[MAPSPAN];

int loadmap();




#endif
