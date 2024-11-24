
#include "printableimplementations.h"
#include "geometricshapes.h"
#include <string.h>

Interface_printable* examplekonstantinfactory_main_printables_create(void) {
	Interface_printable circle1 =
		Printable_create
		(
			geometricshapes_circle_create(geometricshapes_point_create(3.0F, 4.7F, -9.5F))
			,
			CIRCLE
		);

	Interface_printable circle2 =
		Printable_create
		(
			geometricshapes_circle_create(geometricshapes_point_create(98.73F, 14.2F, -5.0F))
			,
			CIRCLE
		);

	Interface_printable square1 =
		Printable_create
		(
			geometricshapes_square_create(geometricshapes_point_create(23.35F, 25.14F, -50.0F), 1.14142F)
			,
			SQUARE
		);

	Interface_printable square2 =
		Printable_create
		(
			geometricshapes_square_create(geometricshapes_point_create(-235.0F, 54.0F, 40.6F), 3.14159265F)
			,
			SQUARE
		);

	Interface_printable line1 =
		Printable_create
		(
			geometricshapes_line_create(5.0F, -7.0F)
			,
			LINE
		);

	Interface_printable line2 =
		Printable_create
		(
			geometricshapes_line_create(1.0F, -4.0F)
			,
			LINE
		);

	Interface_printable* ret = (Interface_printable*)calloc(sizeof(Interface_printable), 6);
	ret[0] = circle1;
	ret[1] = circle2;
	ret[2] = square1;
	ret[3] = square2;
	ret[4] = line1;
	ret[5] = line2;

	return ret;
}

int main() {
	Interface_printable* toBePrinted = examplekonstantinfactory_main_printables_create();
	for (int i = 0; i < 6; i++) Printable_print(toBePrinted[i], Printable_factory_print);
}