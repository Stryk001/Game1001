#include <iostream>;
using namespace std;

int main()
{
	//create name constants to hold minimun score required for each letter grade
	const int
		A_SCORE = 80,
		B_SCORE = 70,
		C_SCORE = 60,
		D_SCORE = 50,
		MIN_SCORE = 0,
		MAX_SCORE = 100;

	int testScore; //holds a numeric score
	char grade;   //hold a letter grade
	bool possibleScore = true;

	cout << "Enter your numeric test score and i will tell uou the letter grade: ";
	cin >> testScore;

	//check if input is valid
	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
	{
		//score is valid
		if (testScore >= A_SCORE)
		{
			cout << "your grade is A.\n";
		}
		else if (testScore >= B_SCORE)
		{
			cout << "your grade is B.\n";
		}
		else if (testScore >= C_SCORE)
		{
			cout << "your grade is C.\n";
		}
		else if (testScore >= D_SCORE)
		{
			cout << "your grade is D.\n";
		}
		else
		{
			cout << "your grade is F.\n";
		}

	}
	else
	{
		//the score is invalid
		cout << "\nThat is an invalid score. Run  the program again and enter a value in the range of\n"
			<< MIN_SCORE << "through " << MAX_SCORE << ".\n";
	}

	return 0;
}