#pragma once
#include "Quadrangle.h"
#include "My_exception.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int side_a, int side_b, int side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d);
};

