#include <iostream>
using namespace std;

int *doubleCapacity(const int *list, int size);

int main()
{
	int size = 5;
	int *list;
	list = new int[size];
	for (int i = 0; i < size; i++)
		list[i] = i;
	cout << "The array is: ";
	for (int i = 0; i < size; i++)
		cout << list[i]<<"  ";
	cout << endl;
	cout << "Doubling size of list and adding the next five alphanumeric values..." << endl;

	int *newList;
	newList = new int[size*2];
	newList = doubleCapacity(list, size);
	delete list;
	cout << "Done." << endl;
	cout << "The new array is: ";
	for (int i = 0; i < size*2; i++)
		cout << newList[i]<<"  ";
	cout << endl;
	delete newList;
	return 0;
}

int *doubleCapacity(const int *list, int size)
{
	int *temp;
	temp = new int[size*2];
	for (int i = 0; i < size; i++)
		temp[i] = list[i];
	for (int i = size; i < size*2; i++)
		temp[i] = (list[i-size]+size);
	return temp;
}