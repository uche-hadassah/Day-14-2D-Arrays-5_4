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
	int grade[ROW][COL] = { 77,68,86,73,96,87,89,78,70,90,86,81 };//hardcoded the grades
	double total[ROW];
	int Option;
	//Display the grades for each student
	for (int i = 0; i < ROW; i++)
	{
		cout << "\nStudent " << i << " ";
		for (int j = 0; j < COL; j++)
		{
			cout << grade[i][j] << " ";
		}
	}
	
	do
	{
		cout << "\nMENU";
		cout << "\n1) Lowest grade";
		cout << "\n2) Highest grade";
		cout << "\n3) Average of all students";
		cout << "\nEnter an option:";
		cin >> Option;
		if (Option == 1)
		{
			cout << "\nThe Lowest Grade is: " << minimum(grade, ROW, COL);
		}
		else if (Option == 2)
		{
			cout << "\nThe Highest Grade is: " << maximum(grade, ROW, COL);
		}
		else if (Option == 3)
		{
			for (int i = 0; i < ROW; i++)//initialize all elements to 0.0
			{
				total[i] = 0.0;
			}
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					total[i] = grade[i][j];//adds to the sum for student i
				}
				cout << "\nThe average grade of student " << i << " is " << average(total, ROW);
			}
		}
		else
		{
			cout << "invalid option!";
			break;
		}
	} while (Option > 0 && Option < 4);
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
	double avg; // Initialize avg to 0.0
	for (int i = 0; i < size; i++)
	{
		double num = sum[i];
		avg = num/size; // Sum all elements in the array
	}
	return avg;
}
