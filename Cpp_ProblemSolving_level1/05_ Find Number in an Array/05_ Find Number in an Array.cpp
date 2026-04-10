
#include <iostream>
using namespace std;
//[Problem]
/*
* Given a sorted array of n integers and a target value, return the index of the target if found, or -1 if not found.
    Input:
    arr = [1, 3, 5, 7, 9, 11, 13]
    target = 7  → Output: 3
    target = 6  → Output: -1

    Optimize the current solution:
    int FindTarget(int arr[], int size, int target)
        {
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == target)
                    return i;
            }
            return -1;
        }
*/
//[Solution]
/*
    1)Accept the sorted array of integers and the target value.
	2)check the First and the last element of the array if they are equal to the target value return their index.
    3) if the target value is less than the first element or greater than the last element return -1.
	4) Begin Itrating the array elements Starting from the Mid Element  Any element[ if > go right, if < go left]
        -> alsway the Half of the array will be ignored in each iteration.
*/

int FindTargetNumberIndex(int arr[], int size, int target)
{
	if (size < 1) return -1;

	if (target < arr[0] || target > arr[size - 1]) return -1;

	if (target == arr[0]) return 0;
	if (target == arr[size - 1]) return size - 1;

   int start= 0, end = size - 1;

   while ( start <= end )
   {
       int mid = start +  ( (end - start) / 2 ) ;
	   if (arr[mid] == target) return mid;

	   if (arr[mid] < target) start = mid + 1;
       else end = mid - 1;

   }
   return -1;
}
//[cost] -> O(log n) -> the loop iterates log(n) times because we are halving the search space in each iteration.
// space complexity -> O(1) -> we are using a constant amount of space to store the variables.
int main()
{
	int SortedArr[] = { 1, 3, 5, 7, 9, 11, 13 };
	int target1 = 7, target2 = 6;
    int size =7;
    cout<<"Array Content: [ ";
    for(int i = 0; i < size ; i++)
    {
        cout<<SortedArr[i]<<" ,";
	}
	cout << " ]" << endl;

	cout << "Target: " << target1 << " -> Index: " << FindTargetNumberIndex(SortedArr, size, target1) << endl;
	cout << "Target: " << target2 << " -> Index: " << FindTargetNumberIndex(SortedArr, size, target2) << endl;
}


