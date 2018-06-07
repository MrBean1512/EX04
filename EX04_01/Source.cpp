#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter a size for the array (how many integers would you like to input)." << endl;
	cin >> size;
	int *arrayPtr;
	int temp;
	double avg = 0;
	arrayPtr = new int[size];
	cout << "Enter " << size << " values:";
	for (int i = 0; i < size; i++)
	{
		cin >> temp;
		arrayPtr[i] = temp;
		avg = avg+temp;
	}
	avg = (double)avg / size;
	cout << "The average is: " << avg << endl;
	int abvAvg=0;
	for (int i = 0; i < size; i++)
	{
		if (arrayPtr[i] > avg)
			abvAvg++;
	}
	cout << "There are " << abvAvg << " numbers above the average." << endl;
	delete[] arrayPtr;
}