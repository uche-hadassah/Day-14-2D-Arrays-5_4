/*Name:Uche Hadassah
This program reads the grades of 4 subjects for 3 students and outputs the lowest grade, 
highest grade and the average grade for each student. These statistics are calculated in 
different functions
*/
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
		cout << "\n4)Exit";
		cout << "\nEnter an option:";
		cin >> Option;
		while (Option < 1 || Option > 4)//Continues while the option is out of bounds
		{
			cout << "Invalid option! Enter a valid number (from 1 to 3):";
			cin >> Option;
		}
		if (Option == 1)//Outputs the lowest grade
		{
			cout << "\nThe Lowest Grade is: " << minimum(grade, ROW, COL);
		}
		else if (Option == 2)//Outputs the highest grade
		{
			cout << "\nThe Highest Grade is: " << maximum(grade, ROW, COL);
		}
		else if (Option == 3)//Outputs the average
		{
			for (int i = 0; i < ROW; i++)//initialize all elements to 0.0
			{
				total[i] = 0.0;
			}
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					total[i] += grade[i][j];//adds to the sum for student i
				}
				//I used i and not ROW so i can easily use it in the function
				cout << "\nThe average grade of student " << i << " is " << average(total, i);
			}
		}
		else
		{
			cout << "\nThank you for your time^_^";
			break;
		}
	} while (Option > 0 && Option < 5);
}
//Computes the lowest grade
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
	return min;//return the lowest grade
}
//Computes the highest grade
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
	return max;//returns the highest grade
}

//Computes the average for each student
double average(double sum[], int size)
{
	double avg = sum[size]/COL; //calculates the average
	return avg;//returns the average
}
