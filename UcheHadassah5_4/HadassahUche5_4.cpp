/*Convert ex. 1 above so that your program uses functions to calculate the statistics 
as follows: a) Write a function called minimum that takes as parameters a twodimensional array 
called grades and two integers for the number of rows and columns, and returns the minimum 
element in the array. b) Write a function called maximum that takes as parameters a 
two-dimensional array called grades and two integers for the number of rows and columns, 
and returns the maximum element in the array. 
c) Write a function called average that takes as parameters a onedimensional array 
and the array size as integer and returns the average*/
#include<iostream>
using namespace std;
int main()
{
	int grade[3][4] = { 77,68,86,73,96,87,89,78,70,90,86,81 };//hardcoded the grades
	int lowest = grade[0][0];//Set to the first element in the array
	int highest = grade[0][0];//Set to the first element in the array
	double sum[] = { 0.0,0.0,0.0 };//Created a 1-D array to store the sum of grades for each student and initialized it all to 0.0
	for (int i = 0; i < 3; i++)
	{
		cout << "\nStudent " << i << " ";
		for (int j = 0; j < 4; j++)
		{
			sum[i] += grade[i][j];//adds to the sum for student i
			cout << grade[i][j] << " ";
			if (grade[i][j] < lowest)
			{
				lowest = grade[i][j];// Sets the lowest grade
			}
			else if (grade[i][j] > highest)
			{
				highest = grade[i][j];//Sets the highest grade
			}
		}
	}
	cout << "\nLowest Grade: " << lowest;
	cout << "\nHighest Grade: " << highest;
	for (int k = 0; k < 3; k++)//Outputs the average for each student
	{
		double avg = sum[k] / 4;
		cout << "\nThe average grade of student " << k << " is " << avg;
	}
}