#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int array[] = { 1,2,4,5,10,100,2,-22 };
	int *min = min_element(array, array + 8);
	cout << "The minimum value is: " << *min << endl;
}