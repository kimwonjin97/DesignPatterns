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


class Point
{
	friend class PointFactory; // violates OCP
	Point(float x, float y) : x(x), y(y)
	{
	}

public:
	float x, y;

	friend ostream& operator<<(ostream& os, const Point& point)
	{
		os << "x: " << point.x << " y: " << point.y;
		return os;
	}
};


struct PointFactory
{
	static Point NewCartesian(float x, float y)
	{
		return { x, y };  //same as Point {x, y } -> could be inferred from the return type of the method in morder cpp.
	}

	static Point NewPolar(float r, float theta)
	{
		return { r * cos(theta), r * sin(theta) };
	}
};

int main()
{
	auto p = PointFactory::NewCartesian(3, 2);
	cout << p << endl;
	return 0;
}
