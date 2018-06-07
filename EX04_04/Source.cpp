#include "Rectangle2D.h"
#include <iostream>
using namespace std;

int main()
{
	Rectangle2d r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);
	cout << "r1.contains(3,3) = " << r1.contains(3, 3) << endl;
	cout << "r1.contains(r2) = " << r1.contains(r2) << endl;
	cout << "r1.overlaps(r3) = " << r1.overlaps(r3) << endl;
	return 0;
}