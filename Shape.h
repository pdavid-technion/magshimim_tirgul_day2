#pragma once
#include "Point.h"
#include "Canvas.h"
#include <string>

class Shape 
{
public:

	// Constructor
	Shape(std::string name, std::string type);

	// Destructor
	~Shape();

	// Getters
	std::string getType();
	std::string getName();

	// Methods
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual void move(Point other)= 0; // add the Point to all the points of shape
	void printDetails() ;

	virtual void draw(const Canvas& canvas) = 0;
	virtual void clearDraw(const Canvas& canvas) = 0;

private:
	std::string _name;
	std::string _type;
};