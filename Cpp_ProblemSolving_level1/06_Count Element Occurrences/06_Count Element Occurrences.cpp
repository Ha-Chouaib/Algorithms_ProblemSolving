
#include <iostream>
//[Problem]
/*
    Description:
    Given an array of n integers and a target value, return how many times the target appears in the array.
    Input:
    arr = [1, 3, 3, 7, 3, 9, 3]
    target = 3  → Output: 4
    target = 5  → Output: 0
*/
//[Solution]
/*
    1)Accept the array of integers and the target value.
	2) Set a counter variable to 0.
	3) Iterate through the array and compare each element with the target value.
		->Iterate the array in both directions arr[0] and arr[n-1] if they are equal to the target value increment the counter variable and move towards the middle of the array.
*/
// [cost] -> O(n/2) -> O(n)the loop iterates n/2 times because we are iterating from both ends of the array towards the middle.
int CountTargetOccurrences(int arr[], int size, int target)
{
    if (size < 1) return 0;
    int count = 0;
    
    for (int i = 0; i < (size+1)/2; i++)
    {
		if (arr[i] == target) count++;
		if (arr[size - 1 - i] == target && size - 1 - i != i) count++;
    }
    return count;
}


int main()
{
	int arr[] = { 1, 3, 3, 7, 3, 9, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int target1 = 7, target2 = 5;

	std::cout << "Target " << target1 << " occurs " << CountTargetOccurrences(arr, size, target1) << " times in the array." << std::endl;
    std::cout << "Target " << target2 << " occurs " << CountTargetOccurrences(arr, size, target2) << " times in the array." << std::endl;

}

