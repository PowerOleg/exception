#include "Quadrangle.h"

Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d) try : side_d(side_d), angle_d(angle_d)
{
	
	this->sides = 4;
	this->name = "Четырехугольник";
	this->side_a = side_a;
	this->angle_a = angle_a;
	this->side_b = side_b;
	this->angle_b = angle_b;
	this->side_c = side_c;
	this->angle_c = angle_c;

	this->side_d = side_d;
	this->angle_d = angle_d;
	check_exception();
}
catch (std::exception e)
{
	std::cout << e.what();
}

void Quadrangle::print_side_values()
{
	std::cout << "Стороны: " << "a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d << std::endl;
}

void Quadrangle::print_angle_values()
{
	std::cout << "Углы: " << "A=" << angle_a << " B=" << angle_b << " C=" << angle_c << " D=" << angle_d << std::endl;
}

void Quadrangle::check_exception()
{
	if (!(this->getSides() == 4 && this->getSides() * 90 == this->angle_a + this->angle_b + this->angle_c + this->angle_d))
	{
		throw My_exception("Сумма углов должна быть 360 градусов\n");
	}
}