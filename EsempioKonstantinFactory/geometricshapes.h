#ifndef GEOMETRICSHAPES_H
#define GEOMETRICSHAPES_H

#include <stdlib.h>

typedef struct {
	float x;
	float y;
	float z;
} Point;

Point* geometricshapes_point_create(float x, float y, float z) {
	Point* ret = (Point*) calloc(sizeof(Point), 1);
	ret->x = x;
	ret->y = y;
	ret->z = z;
	return ret;
}

typedef struct {
	float m;
	float q;
} Line;

Line* geometricshapes_line_create(float m, float q) {
	Line* ret = (Line*)calloc(sizeof(Line), 1);
	ret->m = m;
	ret->q = q;
	return ret;
}

typedef struct {
	Point center;
} Circle;

Circle* geometricshapes_circle_create(Point* center) {
	Circle* ret = (Circle*)calloc(sizeof(Line), 1);
	ret->center.x = center->x;
	ret->center.y = center->y;
	ret->center.z = center->z;
	return ret;
}

typedef struct {
	Point center;
	float side;
} Square;

Square* geometricshapes_square_create(Point* center, float side) {
	Square* ret = (Square*)calloc(sizeof(Line), 1);
	ret->center.x = center->x;
	ret->center.y = center->y;
	ret->center.z = center->z;
	ret->side = side;
	return ret;
}
#endif