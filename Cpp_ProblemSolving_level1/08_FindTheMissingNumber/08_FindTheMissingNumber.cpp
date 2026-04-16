#include <iostream>
#include <map>

//[Problem]
/*
    Description:
    Given an array of n integers containing numbers from 0 to n with exactly one number missing, find and return the missing number.
    Input:
    arr = [3, 0, 1]      → Output: 2
    arr = [0, 1, 3, 4]   → Output: 2  (wait, n=4, so range is 0..4, missing=2... hmm, you check!)
    arr = [9,6,4,2,3,5,7,0,1] → Output: 8

    Constraints:
    1 ≤ n ≤ 10^6
    All numbers are unique
    Range is 0 to n inclusive
    Only one number is missing
*/

//[solution 1]
/*
    1 - calculate sum of range 0 to n
    2 _ clac sum of arr elements
    3 - return diffirence of range sum and array sum 
*/

//[cost]-> O(n)
int FindMissingNumber(int arr[],int size)
{
    int arrSum =0;
    int sum = (size * (size + 1)) / 2;
    for (int i = 0; i < size; i++)
         arrSum += arr[i];
    
    return sum - arrSum;
}


int main()
{
   int arr[] = { 9,6,4,2,3,5,7,0,1 };
   int n = 9;

   std::cout<<"Array: ";
   for(int i =0; i < n; i++)
        std::cout<< arr[i]<<" ";
   
   std::cout<< std::endl;

   std::cout<< "Missed Number: [ "<<FindMissingNumber(arr,n)<<" ]\n";
}

