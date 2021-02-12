#include <iostream>;
using namespace std;

int main()
{
	//create name constants to hold minimun score required for each letter grade
	const int MIN_A_SCORE = 80,
		MIN_B_SCORE = 70,
		MIN_C_SCORE = 60,
		MIN_D_SCORE = 50;

	int testScore; //holds a numeric score
	char grade;   //hold a letter grade

	cout << "enter your numeric test score and i will tell uou the letter grade: ";
	cin >> testScore;

	//determin the letter grade
	if (testScore >= MIN_A_SCORE)
	{
		grade = 'A';
	}
	else if (testScore >= MIN_B_SCORE)
	{
		grade = 'B';
	}
	else if (testScore >= MIN_C_SCORE)
	{
		grade = 'C';
	}
	else if (testScore >= MIN_D_SCORE)
	{
		grade = 'D';
	}
	else if (testScore >= 0)
	{
		grade = 'F';
	}

	cout << "your grade is: " << grade << endl;


	return 0;
}