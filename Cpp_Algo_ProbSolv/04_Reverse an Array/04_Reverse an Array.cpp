
#include <iostream>
using namespace std;
//[problem]->write a program to reverse an array of integers.
/*
* 
        Given an array of n integers, reverse it in-place (without using a second array).
        Input: arr = [1, 2, 3, 4, 5]
        Output: arr = [5, 4, 3, 2, 1]
*/
//[Solution]
/*
    1)Accept the Array of integers.
	2) Initilize a temp variable to store the current element.
    3) Begin the Iteration from the first array element put it to the temp variable 
	4) move the last element to the first index.
    5) ;
*/
void ReverseArray(int arr[], int size)
{
    if(size < 1 ) return;

    
	for (int i = 0; i < size/2 ; i++)
    {
        int temp ;

		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
    }
    
}
//[Cost]-> O(n) -> the loop iterates [n/2]times => O(n) | space complexity -> O(1) -> we are using a constant amount of space to store the variables.
int main()
{
	int NormalArr[] = { 1, 2, 3, 4, 5 };
	int n = 5;
	cout << "Original Array: ";
	for (int i = 0; i < n; i++)
    {
        cout << NormalArr[i] << " ";
    }
    cout << endl;

    ReverseArray(NormalArr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << NormalArr[i] << " ";
    }
    cout << endl;
}
