#include <iostream>
#include <algorithm>
using namespace std;

//PT -- Hi David.
//      Please redo this writing your own version of min_element rather than
//      using the STL library function. I want to see that you know how to work with
//      pointers, and not that you can find library functions.

int main()
{
	int array[] = { 1,2,4,5,10,100,2,-22 };
	int *min = min_element(array, array + 8);
	cout << "The minimum value is: " << *min << endl;
}
