#include <iostream>
#include <unordered_set>
using namespace std;

//[Problem]
/*
    Description:
    Given an array of n integers, return true if any value appears at least twice, return false if all elements are distinct.
    Input:
    arr = [1, 2, 3, 1]   → true
    arr = [1, 2, 3, 4]   → false
    arr = [1, 1, 1, 3]   → true
    Constraints:
    
    1 ≤ n ≤ 10^6
    -10^9 ≤ arr[i] ≤ 10^9
    
    
    🐢 Naive Solution — You Optimize It
    cppbool HasDuplicate(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
                if (arr[i] == arr[j])
                    return true;
        return false;
    }
    
    💀 Current Complexity: O(n²)
    🎯 Your Target: O(n)
    
*/

//[Solution]
/*
    1- use unordered_set to store arr values
    2_ with each itration check if the number exists in the container
        -> yes return true,
        -> continue iterating to the end
    3_ no duplication found return false;
*/
//[cost] O(n) 

bool HasDuplication(int arr[], int n)
{
    unordered_set<int> pool;
    for (int i = 0; i < n; i++)
    {
        if(pool.contains(arr[i]))
            return true;
        pool.insert( arr[i]);
    }
    return false;
}
int main()
{
    int arr1 [] = { 1, 2, 3, 4 };
    int arr2 [] = { 1, 1, 1, 3 };
    int n=4;
    std::cout << "Array 1: ";
    for (int i = 0; i < n; i++)
        std::cout << arr1[i] << " ";
    cout<<"\nHas duplications: [" << HasDuplication(arr1,n) <<"]";

    std::cout << "\n\nArray 2: ";
    for (int i = 0; i < n; i++)
        std::cout << arr2[i] << " ";
    cout << "\nHas duplications: [" << HasDuplication(arr2, n) << "]";

}

