#include "Rectangle2D.h"
#include <iostream>
using namespace std;

Rectangle2d::Rectangle2d()
{
	x, y = 0;
	width, length = 1;
	topAxis = (y + (length / 2));
	leftAxis = (x - (width / 2));
	bottomAxis = (y - (length / 2));
	rightAxis = (x + (width / 2));

}

Rectangle2d::Rectangle2d(double x, double y, double width, double length)
{
	(*this).x = x;
	(*this).y = y;
	(*this).width = width;
	(*this).length = length;
	topAxis = (y + (length / 2));		//working with the edges of the squares is much easier
	                                        //PT -- true, but you need to maintain these when setX, setY are called.
	leftAxis = (x - (width / 2));
	bottomAxis = (y - (length / 2));
	rightAxis = (x + (width / 2));
}

const double Rectangle2d::getX()
{
	return x;
}
const double Rectangle2d::getY()
{
	return y;
}
const double Rectangle2d::getWidth()
{
	return width;
}

const double Rectangle2d::getLength()
{
	return length;
}

void Rectangle2d::setX(double x)
{
	(*this).x = x;
}

void Rectangle2d::setY(double y)
{
	(*this).y = y;
}

void Rectangle2d::setWidth(double width)
{
	(*this).width = width;
}

void Rectangle2d::setLength(double length)
{
	(*this).length = length;
}

const double Rectangle2d::getArea()
{
	return (length*width);
}

const double Rectangle2d::getPerimeter()
{
	return ((width * 2) + (length * 2));
}

const bool Rectangle2d::contains(double x, double y)
{
	if ((x>leftAxis&&x<rightAxis)&&
		(y>bottomAxis&&y<topAxis))
		return true;
	else
		return false;
}

const bool Rectangle2d::contains(const Rectangle2d &r)
{
	if ((r.leftAxis>leftAxis&&
		r.rightAxis<rightAxis) &&
		(r.bottomAxis>bottomAxis&&
			r.topAxis<topAxis))
		return true;
	else
		return false;
}

const bool Rectangle2d::overlaps(const Rectangle2d &r)
{
	if ((r.leftAxis>leftAxis||
		r.rightAxis<rightAxis) &&
		(r.bottomAxis>bottomAxis||
			r.topAxis<topAxis))
		return true;
	else
		return false;
}
