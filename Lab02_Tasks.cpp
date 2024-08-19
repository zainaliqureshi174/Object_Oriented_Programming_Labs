//============================================================================
// Name        : Lab_02_Muhammad_Zain_Ali_22i_0562.cpp
// Section     : AI-D
//============================================================================

#include <iostream>
using namespace std;

// Prototypes: 

void Task1();
void Task2();
void Task3();
void Task5();
void Task6();

// Task 1 Sub-function for multiplying the given numbers:

int multiplier(int *a, int *b, int *c, int *d, int *e)
{
	int product = *a * *b * *c * *d * *e;
	return product;
}

// Task 3 Sub Function for Swapping two numbers

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// Task 5 Sub Function to sort the Array

void find(int arr[] , int* x, int value)
{
	cout << "Your entered numbers are: ";
	for (int i = value; i < *x; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int temp;
	for(int j = value; j < *x; j++)
	{
		for (int i = 0; i < *x-1; i++)
		{
			if (arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;	
			}
		}
	}
	
	cout << "Ascending Order: ";
	for (int i = value; i < *x; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	cout << "Descending Order: ";
	for (int i = *x - 1; i >= value; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Main Driver Code: 

int main()
{
	int task = 0;
	while (true)
	{
		cout << "Enter 0 to quiet, ";
		cout << "Enter the task to be executed between 1 - 6: ";
		cin >> task;
		if (task == 1)
		{
			Task1();
		}
		else if (task == 2)
		{
			Task2();
		}
		else if (task == 3)
		{
			Task3();
		}
		else if (task == 4)
		{
			cout << "Task 4 is missing.\n";
		}
		else if (task == 5)
		{
			Task5();
		}
		else if (task == 6)
		{
			Task6();
		}
		else if (task == 0)
		{	
			cout << "\tThnx, Marks puury banty hain!!!\n";
			break;
		}
		else
		{
			cout << "sorry!!! Enter a valid number.";
		}
	}
	return 0;
}

// Task 1: 

void Task1()
{

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;

	cout << "Enter 5 numbers to take the Product of those numbers: ";

	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	
	int multiply = 0;

	multiply = multiplier(&num1, &num2, &num3, &num4, &num5);
	cout << multiply << endl;

}

// Task 2: 

void Task2()
{
int x = 5;

int *ptr1;				//declare a pointer variable ptr1 pointing to x
ptr1 = &x;
cout << *ptr1 << endl;			//display the value of x using ptr1
*ptr1 = 10;				//change the value of x to 10 through ptr1
*ptr1 += 2.5;				//increase this data value by 2.5
cout << *ptr1 << endl;			//display the value using cout
double *fptr;				//Declare the variable fPtr to be a pointer to an object of type double.
double y = 9;
fptr = &y;				//Assign the address of variable number1 to pointer variable fPtr.
cout << *fptr << endl;			//Print the value of the object pointed to by fPtr.
double z = 8;
z = *fptr;				//Assign the value of the object pointed to by fPtr to variable number2.
cout << *fptr << endl;			//Print the value of number2.
cout << &y << endl;			//Print the address of number1.
cout << fptr <<endl;			//Print the address stored in fPtr. Is the value printed the same as the address of number1?

}

// Task 3:

void Task3()
{
	int num1;
	int num2;

	cout << "Enter 2 numbers and I'll Swap them.\n";
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "\n\t---Swaping---\n\n";

	swap(&num1, &num2);

	cout << "Your 1st number is now: " << num1 << endl;
	cout << "Your 2nd number is now: " << num2 << endl;
}

// Task 5:

void Task5()
{
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	int array[size];
	cout << "Enter the numbers in the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	find(array , &size, 0);
}

void Task6()
{
	cout << "Asma\' reported: The Messaenger of Allah,peace and blessings be upon him,said, \"Spend in charity and do not count it,lest Allah count it against you. Do not hoard it, lest Allah withhold from you.\"\nSource: Sahih al-Bukhari 2451,Sahih Muslim 1029\n";
}
