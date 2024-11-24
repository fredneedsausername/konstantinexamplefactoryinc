
#include "printable.h"

void Printable_print(Interface_printable toBePrinted, Printable_print_function_factory factory) {
	factory(toBePrinted->type)(toBePrinted);
}

Interface_printable Printable_create(void* object, PrintableType type) {
	Interface_printable ret = (Interface_printable)calloc(sizeof(Printable), 1);
	ret->object = object;
	ret->type = type;
	return ret;
}