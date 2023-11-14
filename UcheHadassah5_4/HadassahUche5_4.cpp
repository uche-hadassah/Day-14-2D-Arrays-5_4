/*Convert ex. 1 above so that your program uses functions to calculate the statistics 
as follows: 
a) Write a function called minimum that takes as parameters a twodimensional array 
called grades and two integers for the number of rows and columns, and returns the minimum 
element in the array. 
b) Write a function called maximum that takes as parameters a 
two-dimensional array called grades and two integers for the number of rows and columns, 
and returns the maximum element in the array. 
c) Write a function called average that takes as parameters a onedimensional array 
and the array size as integer and returns the average*/
#include<iostream>
using namespace std;
const int ROW = 3;
const int COL = 4;
//Function Prototypes
int minimum(int [][COL],int, int);
int maximum(int[][COL], int, int);
double average(double[], int); 
int main()
{
	int Option;
	int grade[ROW][COL] = { 77,68,86,73,96,87,89,78,70,90,86,81 };//hardcoded the grades
	cout << "\nMENU";
	cout << "\n1) Lowest grade";
	cout << "\n2) Highest grade";
	cout << "\n3) Average of all students";
	cout << "\nEnter an option:";
	cin >> Option;
	if (Option == 1)
	{
		cout << "\nThe Lowest Grade Is: " << minimum(grade, 3, 4);
	}
	else if (Option == 2)
	{
		cout << "\nThe Highest Grade Is: " << maximum(grade, 3, 4);
	}
	int highest = grade[0][0];//Set to the first element in the array
	double sum[] = { 0.0,0.0,0.0 };//Created a 1-D array to store the sum of grades for each student and initialized it all to 0.0
	for (int i = 0; i < 3; i++)
	{
		cout << "\nStudent " << i << " ";
		for (int j = 0; j < 4; j++)
		{
			sum[i] += grade[i][j];//adds to the sum for student i
			cout << grade[i][j] << " ";
			
			else if (grade[i][j] > highest)
			{
				highest = grade[i][j];//Sets the highest grade
			}
		}
	}
	for (int k = 0; k < 3; k++)//Outputs the average for each student
	{
		double avg = sum[k] / 4;
		cout << "\nThe average grade of student " << k << " is " << avg;
	}
}

int minimum(int grades[][COL], int row, int col)
{
	int min = grades[0][0];//Set to the first element in the array
	for(int i = 0;i<row;i++)
	{
		for(int j = 0;j<col;j++)
		{
			if (grades[i][j] < min)
			{
				min = grades[i][j];// Sets the lowest grade
			}
		}
	}
	return min;
}

int maximum(int grades[][COL], int row, int col)
{
	int max = grades[0][0];//Set to the first element in the array
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (grades[i][j] > max)
			{
				max = grades[i][j];// Sets the lowest grade
			}
		}
	}
	return max;
}

double average(double sum[], int size)
{
	return 0.0;
}
