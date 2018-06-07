#ifndef RECTANGLE2d_H_
#define RECTANGLE2d_H_
class Rectangle2d
{
private:
	double x, y, width, length;
	double topAxis, leftAxis, bottomAxis, rightAxis;	//not specified for but these help keep everything small
public:
	Rectangle2d();
	Rectangle2d(double x, double y, double width, double length);
	const double getX(), getY(), getWidth(), getLength();
	void setX(double), setY(double), setWidth(double), setLength(double);
	const double getArea(), getPerimeter();
	const bool contains(double x, double y);
	const bool contains(const Rectangle2d& r);
	const bool overlaps(const Rectangle2d& r);
};
#endif