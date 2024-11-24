#ifndef PRINTABLE_H
#define PRINTABLE_H

#include "PrintableType.h"
#include <stdlib.h>

typedef struct {
	void* object;
	PrintableType type;
} Printable;

typedef Printable* Interface_printable;

Interface_printable Printable_create(void* object, PrintableType type);

typedef void (*Printable_print_function)(Interface_printable);
typedef Printable_print_function (*Printable_print_function_factory)(PrintableType);

void Printable_print(Interface_printable toBePrinted, Printable_print_function_factory factory);

#endif