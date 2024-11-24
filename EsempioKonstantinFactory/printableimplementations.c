
#include <stdio.h>
#include "printableimplementations.h"

void Printable_factorymethod_print_point(Interface_printable point) {
	printf("point point to the southeast point\n");
}

void Printable_factorymethod_print_line(Interface_printable line) {
	printf("line aligns with politicians\n");
}

void Printable_factorymethod_print_circle(Interface_printable circle) {
	printf("circle goes in circles\n");
}

void Printable_factorymethod_print_square(Interface_printable square) {
	printf("square has things squared\n");
}

Printable_print_function Printable_factory_print(PrintableType type) {
	switch (type) {
	case POINT: return Printable_factorymethod_print_point;
	case LINE: return Printable_factorymethod_print_line;
	case CIRCLE: return Printable_factorymethod_print_circle;
	case SQUARE: return Printable_factorymethod_print_square;
	default: return NULL;
	}
}

