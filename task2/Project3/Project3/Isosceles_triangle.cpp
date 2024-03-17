#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b, int angle_c) try : Triangle(side_a, side_b, side_c, angle_a, angle_b, angle_c)
{
	if (side_a != side_c)
	{
		throw My_exception("������� � � � ������ ���� �����");
	}
	if (angle_a != angle_c)
	{
		throw My_exception("���� � � � ������ ���� �����");
	}
	this->name = "�������������� �����������";

}
catch (std::exception e)
{
	std::cout << e.what();
}