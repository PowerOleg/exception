#pragma once
#include "Triangle.h"
#include "My_exception.h"

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b, int angle_c);
};

