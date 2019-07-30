#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

double Circumference (double a)		// FUNCTION FOR CIRCUMFERENCE OF A CIRCLE
{
	double w = 2 * 3.14 * a;
	return w;
}

double Area1 (double a)					// FUNCTION FOR AREA OF A CIRCLE
{
	double x = 3.14 * a * a;
	return x;
}

double Perimeter (double a)				// FUNCTION FOR PERIMETER OF A SQUARE
{
	double y = 4 * a;
	return y;
}

double Area2 (double a)					// FUNCTION FOR AREA OF A SQUARE
{
	double z = a * a * a * a;
	return z;
}

int main()
{
	char choice;									// VARIABLE DECLARATIONS
	char response;
	double radius;
	double side;
	int i;
	int j;
	int size;
	int temp;
	int arr[10];
	int *ptr1;

	do
	{

	cout << fixed << showpoint << setprecision(2);
	cout << " C  for Circle || S for Square || A for Array" << endl;
	cout << "----------------------------------------------" << endl;

	cout << "What Operation to do: ";
	cin >> choice;

	switch(choice)
	{
	case 'C':
	case 'c':
		double circ;
		double Ar1;

		cout << "Enter Value for Radius: ";
		cin >> radius;

		circ = Circumference(radius);
		cout << "Circumference = " << circ << endl;

		Ar1 = Area1(radius);
		cout << "Area = " << Ar1 << endl;

		cout << "Continue? : ";
		cin >> response;

		cout << endl;
		break;

	case 'S':
	case 's':
		double per;
		double Ar2;

		cout << "Enter Value for Side: ";
		cin >> side;

		per = Perimeter(side);
		cout << "Perimeter = " << per << endl;

		Ar2 = Area2(side);
		cout << "Area = " << Ar2 << endl;
		
		cout << "Continue? : ";
		cin >> response;

		cout << endl;
		break;

	case 'A':
	case 'a':

		cout << "Enter Array Size: ";
		cin >> size;

		cout << "Enter Array Elements: \n";
		for (i=0 ; i<size ; i++)
		{
			cin >> arr[i];
		}

		for (i=0 ; i<size ; i++)
		{
			for (j=0 ; j<size-i-1 ; j++)
			{
				if (arr[j] < arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}

		cout << "Array in Descending Order: \n";
		for (i=0 ; i<size ; i++)
		{
			cout << arr[i] << endl;
		}

		cout << "Continue? : ";
		cin >> response;

		cout << endl;

		break;
		
	default : 
		cout << "INVALID INPUT";	
		break;
	}
} while (response == 'Y' || response == 'y');

	cout << "Thank You and God Bless. " << endl;

	getch();
	return 0;
}


