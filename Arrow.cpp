#include "Arrow.h"
#include <iostream>

Arrow::Arrow(Point a, Point b, std::string type, std::string name) : Shape(name,type), _source(a), _destination(b)
{
	if(a.getX() == b.getX() && a.getY() == b.getY())
	{
		std::cout << "both points are the same, abort" << std::endl;
		exit(0);
	}
}


void Arrow::draw(const Canvas& canvas)
{
	canvas.draw_arrow(_source, _destination);
}
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}


