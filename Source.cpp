//Program information
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double *theScores, //dynamically allocaate an array
		total = 0.0, // accumulator
		average; // hold average
	int testNum, //holds number of test
		count; //count variable
		//get the number of test
		cout << "How many test?";
		cin >> testNum;

		//dynamically allocate an array large enough
		//to hold  that many test
		theScores = new double[testNum];

		//get the scores for each test
		cout << "enter score.\n";
		for (count = 0; count < testNum; count++)
		{
			cout << "Student " << (count + 1) << ": ";
			cin >> theScores[count];
			if (theScores[count] < 0) 
			{
				cout << "Invalid entry";
				count--;
			}
		}
		//calculate the total
		for (count = 0; count < testNum; count++)
		{
			total += theScores[count];
		}
		//calculate the average test
		average = total / testNum;

		//Display results
		cout << fixed << showpoint << setprecision(2);
		cout << "\n\n The Scores in ascending order" << theScores << endl;
		cout << "Average Score: " << average << endl;

		//free up dynamic memory
		delete[] theScores;
		theScores = 0;

		return 0;
		
}