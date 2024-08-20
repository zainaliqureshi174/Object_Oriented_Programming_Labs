//============================================================================
// Name        : Lab_03_Muhammad_Zain_Ali_22i_0562.cpp
// Section     : AI-D
//============================================================================


/*
Create a 1D array dynamic array name arr[] and perform operations as follow.
. Take the input for the size of array from user.
. Initialize numeric values to array with user input.
. Take the index from the user where he/she want to insert new value. perform insert operation.
. Take the 2 values from user and finds the first from array and update the new (second) value in that index.
. Take the value from the user and finds in the array and delete it from array.
. Take 2 indexes from user and sort them in that range of indexes in ascending order.
. I appreciate that you add some functionalities for catering wrong inputs and error description msgs.
For example.
Element not found in the array.
wrong index input.

Best of luck
*/


#include <iostream>
using namespace std;

void display(int Array[], int Size)		//Display the array elements
{
	cout << "Your entered numbers are: ";
	for (int i = 0; i < Size; i++)
	{
		cout << Array[i] << " ";
	} 
	cout << endl;
}

void Sort(int arr[], int z, int x, int y)	//Sort the array elements in ascending order in the given range
{
	 
	int temp;
	for(int j = x; j <= y; j++)
	{
		for (int i = x; i < y; i++)
		{
			if (arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;	
			}
		}
	}
}

void insert(int ind, int numb, int arr[], int SIZE)
{	

	int temp = SIZE + 1;
	int *newarr = new int[temp];		//Dynamic array pointer
	for (int i = 0; i < ind; i++)
	{
		newarr[i] = arr[i];
	}
	newarr[ind] = numb;
	for (int i = ind+1; i < temp; i++)
	{
		newarr[i] = arr[i-1];
	}
	
	display(newarr, temp);			//Display the array elements
	
	cout << "Again Enter 2 numbers.\n";
	cout << "1st number is the number I'll search in the array,";
	cout << " and then I'll replace that specific number, by your entered 2nd number.\n";
	
	int num1 = 0;
	int num2 = 0;
	
	cout << "1st number: ";
	cin >> num1;
	cout << "2nd number: ";
	cin >> num2;
	
	for (int i = 0; i < temp; i++)
	{
		if (newarr[i] == num1)
		{
			newarr[i] = num2;
		}	
	}
	
	display(newarr, temp);			//Display the array elements
	
	cout << "Enter a number and I'll delete it from the above Array: ";
	cin >> num1;
	
	int index = 0;
	
	//Checking the number in array
	for (int i = 0; i < temp ; i++)
	{
		if (newarr[i] == num1)
		{
			index = i;
			break;
		}
		
		if (i == temp - 1 && newarr[i] != num1)
		{
			cout << "Sorry You Entered Wrong number!!!\n";
			cout << "Please Enter again: ";
			cin >> num1;
			i = 0;
		}
	}
	
	//Deleting the number from the array
	int newsize = temp - 1;
	int *finalarr = new int[newsize];		//Dynamic array pointer
		
	for (int j = 0; j < index; j++)
	{
		finalarr[j] = newarr[j];
	}
	for (int i = index; i < newsize; i++)
	{
		finalarr[i] = newarr[i+1];
	}
	
	display(finalarr, newsize);		//Display the array elements
	
	cout << "Enter 2 indexes and I'll sort the array in that range in ascending order.\n";
	cout << "1st index: ";
	cin >> num1;
	cout << "2nd index: ";
	cin >> num2;
	
	Sort(finalarr, SIZE, num1, num2);	//Sort the array elements in ascending order in the given range
	
	display(finalarr, SIZE);		//Display the array elements
	
	delete []finalarr;
	delete []newarr;
}

// Main Driver Code

int main()
{
	cout << "Enter the size of the array: ";
	int size = 0;
	cin >> size;				//Input Size
	while (true)
	{
		if (size < 0)
		{
			cout << "Enter a positive number!!!!\n";
			cin >> size;
		}
		else 
		{
			break;
		}
	}
	
	int *arr = new int[size];		//Dynamic array pointer
	
	cout << "Enter the numbers in the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);		//Input Numbers
	} 	
	
	display(arr , size);			//Display the array elements
	
	cout << "Enter 2 numbers.\n";
	cout << "Enter 1st number which is the index, ";
	cout << "then enter 2nd number and I'll enter this number on your given index.\n";
	
	int index = 0;
	int num = 0;
	
	cout << "Index: ";
	cin >> index;
	while (true)
	{
		if (index >= 0 && index < size)
		{
			break;
		}
		else
		{
			cout << "Invalid number!!! Please enter again: \n";
			cin >> index;
		}
	}
	
	cout << "Number: ";
	cin >> num;

	insert(index, num, arr, size);		//Inserts 1 number on the given index and increment in the size of the array
	
	
	delete []arr;
	
return 0;
}
