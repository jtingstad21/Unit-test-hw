#include <iostream>
#include "Square.h"

bool isSquare(int a, int b, int c, int d) {
	if (a == b && a == c && a == d)
	{
		if (a > 0)
			return true;
		else
			return false;
	}
	else
		return false;
}
