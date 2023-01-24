#include <stdlib.h>
#include <math.h>

float distance2d(int x1, int y1, int x2, int y2) {
	int xdist = abs(x1 - x2);
	int ydist = abs(y1 - y2);
	float dist = sqrtf((xdist * xdist) + (ydist * ydist));
	return dist;
}

