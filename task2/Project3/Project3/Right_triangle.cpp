#include "Right_triangle.h"

Right_triangle::Right_triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b, int angle_c) try : Triangle(side_a, side_b, side_c, angle_a, angle_b, angle_c)
{
	if (angle_c != 90)
	{
		throw My_exception("���� C ������ ���� ����� 90 ��������");
	}
	this->name = "������������� �����������";
}
catch (std::exception e)
{
	std::cout << e.what();// "���� C ������ ���� ����� 90 ��������";
}
