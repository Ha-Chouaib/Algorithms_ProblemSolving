#include <iostream>
#include <tuple>
//[Problem]
/*
    Description:
    Given an array of n integers and a target sum, return the indices of the two numbers that add up to the target. Assume exactly one solution exists.
    Input:
    arr = [2, 7, 11, 15], target = 9
    Output: [0, 1]  (because arr[0] + arr[1] = 2 + 7 = 9)

	## optimize the current solution:
    pair<int,int> TwoSum(int arr[], int size, int target)
    {
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
                if (arr[i] + arr[j] == target)
                    return {i, j};
    
        return {-1, -1};
    }
*/
//[Solution ]
/*
  
*/


std::tuple<int,int> TwoSum(int arr[], int size, int target)
{
	int index1 = -1, index2 = -1;
	
	int n1 = 0, n2 = 0;
    for (int i = 0; i < size; i++)
    {
        
        
    }
       
    return {index1, index2};
}
int main()
{
	int arr[] = { 2, 7, 11, 15 };
	int target = 9;
    
	auto [index1, index2] = TwoSum(arr, 4, target);
	std::cout << "Indices: " << index1 << ", " << index2 << std::endl;
}

