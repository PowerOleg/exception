#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b, int angle_c) try : Triangle(side_a, side_b, side_c, angle_a, angle_b, angle_c)
{
	if (side_a != side_b || side_a != side_c)
	{
		throw My_exception("Стороны должны быть равны");
	}
	if (angle_a != angle_b || angle_a != angle_c)
	{
		throw My_exception("Углы должны быть равны");
	}

	this->name = "Равносторонний треугольник";
}
catch (std::exception e)
{
	std::cout << e.what();
}