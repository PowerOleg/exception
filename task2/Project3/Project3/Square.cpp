#include "Square.h"

Square::Square(int side_a, int side_b, int side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d) 
try : Quadrangle(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_c, angle_d)
{
	if (!(side_a == side_c && side_b == side_d))
	{
		throw My_exception("Все стороны должны быть равны");
	}
	if (angle_a != 90 || angle_b != 90 || angle_c != 90 || angle_d != 90)
	{
		throw My_exception("Углы должны быть равны 90 градусов");
	}
	this->name = "Квадрат";
}
catch (std::exception e)
{
	std::cout << e.what();
}