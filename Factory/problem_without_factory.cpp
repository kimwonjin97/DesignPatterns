#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <tuple>
#include <sstream>
#include <memory>
#include <cmath>

using namespace std;

enum class PointType
{
	cartesian,
	polar
};

struct Point
{
	//overloading function with same type is not possible in cpp
//    Point(float x, float y) : x(x), y(y) {}



// even though documented well its not easy to figure out what a and b actually are.
	//!
	//! \param a this is either x or rho
	//! \param b this is either y or theta
	//! \param type
	Point(float a, float b, PointType type = PointType::cartesian)
	{
		if (type == PointType::cartesian)
		{
			x = a;
			y = b;
		}
		else
		{
			x = a * cos(b);
			y = a * sin(b);
		}
	}

	float x, y;
};