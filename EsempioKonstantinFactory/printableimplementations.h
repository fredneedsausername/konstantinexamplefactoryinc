#ifndef PRINTABLEIMPLEMENTATIONS_H
#define PRINTABLEIMPLEMENTATIONS_H

#include "printable.h"

void Printable_factorymethod_print_point(Interface_printable);

void Printable_factorymethod_print_line(Interface_printable);

void Printable_factorymethod_print_circle(Interface_printable);

void Printable_factorymethod_print_square(Interface_printable);

Printable_print_function Printable_factory_print(PrintableType);
#endif