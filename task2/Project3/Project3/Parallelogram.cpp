#include "Parallelogram.h"

Parallelogram::Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d)
try : Quadrangle(side_a, side_b, side_c, side_d, angle_a, angle_b, angle_c, angle_d)
{
	if (side_a != side_c)
	{
		throw My_exception("Стороны a и c должны быть равны");
	}
	if (side_b != side_d)
	{
		throw My_exception("Стороны b и d должны быть равны");
	}
	if (angle_a != angle_c)
	{
		throw My_exception("Углы А и С должны быть равны");
	}
	if (angle_b != angle_d)
	{
		throw My_exception("Углы B и D должны быть равны");
	}
	this->name = "Параллелограмм";
}
catch (std::exception e)
{
	std::cout << e.what();
}