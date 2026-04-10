#include <iostream>

//[Problem]->write a program to check if an array of integers is sorted in ascending order.
/*
* optimize the given Solution
	bool IsSorted(array<int>^ arr)
	{
	    for (int i = 0; i < arr->Length; i++)
	    {
	        for (int j = i + 1; j < arr->Length; j++)
	        {
	            if (arr[i] > arr[j])
	                return false;
	        }
	    }
	    return true;
	}
*/ 
//[Solution]
/*
	1)Accept the Array of integers from the user.
	2) Iterate the array and compare the elemet with one Next of it.
		-> If the current element is greater than the next element, then the array is not sorted in ascending order.
*/

bool IsArraySorted(int arr[], int size)
{
	for(int i = 0;i < size -1; i++)
	{
		if(arr[i] > arr[i+1])
		{
			return false;
		}
	}
	return true;
}
//[Cost]-> O(n) -> the loop iterates [n]times => O(n) | space complexity -> O(1) -> we are using a constant amount of space to store the variables.

int main()
{
	int orderedArr [] = {1, 2, 3, 4, 5};
	int unorderedArr [] = {3, 1, 4, 2, 5};

	std::cout << "Is the ordered array sorted in ascending order? " << (IsArraySorted(orderedArr, 5) ? "Yes" : "No") << std::endl;
	std::cout << "Is the unordered array sorted in ascending order? " << (IsArraySorted(unorderedArr, 5) ? "Yes" : "No") << std::endl;
}

