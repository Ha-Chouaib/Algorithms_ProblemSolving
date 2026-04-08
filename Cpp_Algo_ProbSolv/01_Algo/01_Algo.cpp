

#include <iostream>
using namespace std;

//[Problem]-> write a program to print the multiplication table from 1 to 10.
//[Solution]
/*
	1)print the header of the multiplication table.
	2)Nested loop to print the multiplication table. 
		-> outer loop to iterate from 1 to 10 (for rows).
		-> inner loop to iterate from 1 to 10 (for columns).
*/
//print Multiplication Table [Cost]-> O(n^2) -> the outerloop iterates [n]times Also inner loop iterates [n]times => O(n*n) -> O(n^2)
	

string sepatareColumns(int num)
{
	return num < 10 ? "	|" : "	|";
}
void printHeader()
{
	
	cout<< "Multiplication Table From 1 to 10" <<endl;
	cout << "----------------------------------" << endl;
	cout << sepatareColumns(10);
	for(int i = 1; i<=10; i++)
	{
		cout << "	" << i << " ";
	}
	cout << std::endl;
	cout << "\n----------------------------------------------------------------------------------------------\n" << std::endl;
}
void printMultiplicationTable()
{
	printHeader();
	for(int i = 1; i<=10; i++)
	{
		cout << " " << i << sepatareColumns(i);
		for(int j = 1; j<=10; j++)
		{
			cout << "	" << i*j << " ";
		}
		cout <<endl << endl;
	}
}
int main()
{
	
	printMultiplicationTable();
}

