#include <iostream>
using namespace std;

//[Problem]-> write a program to find the maximum number in an array of integers.

//[Solution]
/*
	1)Accept the Array of integers from the user.
	2)Initialize a variable to store the maximum number, set it to the first element of the array.
		-> Assume the First Element is the Maximum Number.
		-> Compare the current maximum number with each element in the array.
		-> Find the Max Number and return;
*/

	int FindMaxNumberInArray(int arr[], int size)
	{
		int maxNumber = arr[0]; 
		for (int i = 1; i < size ; i++)
		{
			if(maxNumber < arr[i])
			{
				maxNumber = arr[i];
			}
		}
		return maxNumber;
	}

	//[Cost]-> O(n) -> the loop iterates [n]times => O(n)
int main()
{
	int arr[] = { 3, 7, 1, 9, 4 };

	cout << "The Maximum Number in the Array is: " << FindMaxNumberInArray(arr, 5) << std::endl;
}

