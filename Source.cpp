//Program information
#include <iostream>
#include <iomanip>
using namespace std;

void getGrades( double *score, int size);
void displayGrades(double *score, int size, double avg);
void sort(double* score, int size);
double average(double *score, int numScores);

int main()
{
	double *theScores, //dynamically allocate an array
		total = 0.0, // accumulator
		average; // hold average
	int testNum, //holds number of test
		count; //count variable
		//get the number of test
		cout << "How many tests? ";
		cin >> testNum;

		//dynamically allocate an array large enough
		//to hold  that many test
		theScores = new double[testNum];

		//get the scores for each test
		cout << "enter score.\n";
		
		//CALLING THE FUNCTION GET GRADES USING THE STUB PROVIDED BY INSTRUCTOR
        getGrades(theScores, testNum);
        
        
        //YOU CAN DO THE SAME THING FOR AVERAGE HERE
        //SOMETHING LIKE THIS:
        // average(theScores, numScores);
        //THEN USE LINES 39-45 IN THAT FUNCTION - YOU MAY NEED TO CHANGE VERBIAGE OR WHATEVER
        
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

void sort (double *score, int size)
{
    
}

//PAY CLOSE ATTENTION TO WHAT'S HAPPENING HERE, BRO! ON LINE 29, I CALL 
//THE FUNCTION GETGRADES AND I PASS IN "theScores" and "testNum" 
//THE FUNCTION GETGRADES USES *SCORE AS A POINTER BACK TO "theScores". IT 
//ALSO TAKES "testNum" IN AS THE ARGUMENT FOR "size." I CHANGED YOUR FOR LOOP
//INTO A WHILE LOOP. NOW WHAT'S HAPPENING IS THAT I'M REFERENCING "score" INSIDE THE
//FUNCTION, BUT I'M ACTUALLY MANIPULATING THE CONTENTS OF "theScores" BECAUSE 
//score IS POINTING BACK TO "theScores." THAT'S WHY I'M ALLOWED TO USE VOID HERE. 
//I DON'T NEED TO RETURN THE ARRAY. I AM SIMPLY MANIPULATING "theScores" VIA THE
//POINTER. SO THIS FUNCTION DOESN'T RETURN ANYTHING (SO IT'S VOID) - BUT IT'S 
//MANIPULATING THE ARRAY IN THE MAIN LOOP. 
void getGrades(double *score, int size)
{
    int i = 0;
	while (i < size)
	{
		cout << "Student " << (i + 1) << ": ";
		cin >> score[i];
		if (score[i] < 0) 
		{
			cout << "Invalid entry";
			i--;
		}
		i++;
	}    
}

//NOTE HERE THAT THIS FUNCTION WILL RETURN A DOUBLE. *score IS STILL
//POINTING BACK TO "theScores" SO WE CAN ITERATE THROUGH IT, COME UP WITH AN
//AVERAGE AND RETURN IT. THIS IS A LITTLE DIFFERENT THAN GETGRADES() BECAUSE
//WE'RE NOT MANIPULATING THE ARRAY - JUST REFERENCING IT.
double average(double *score, int numScores)
{
    //DO YOUR STUFF IN HERE
}
