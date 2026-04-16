#include <iostream>
#include <tuple>
#include <unordered_map>
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
	1) Accept the array of integers and the target sum.
	2) we should use Only one loop to find the two numbers that add up to the target sum.
	3) We can use a hash map to store the numbers we have seen so far and their indices. For each number in the array,
        we check if the complement (target - current number) exists in the hash map. If it does, we have found our two numbers and can return their indices.
*/


std::tuple<int,int> TwoSum(int arr[], int size, int target)
{

	
	std::unordered_map<int, int> numMap; // to store numbers and their indices
    for (int i = 0; i < size; i++)
    {
		if (numMap.contains(target - arr[i]))  return { numMap[target - arr[i]], i }; 
        numMap[arr[i]] = i; 
    }
       
    return {-1, -1};
}
int main()
{
	int arr[] = { 2, 7, 11, 15 };
	int target = 9;
    
	auto [index1, index2] = TwoSum(arr, 4, target);
	std::cout << "Indices: " << index1 << ", " << index2 << std::endl;
}

