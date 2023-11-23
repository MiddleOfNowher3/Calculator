#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

//fuction call
void GatherNum(float& numOne, float& numTwo);

using namespace std;

int main()
{
	string operation; //lets them store there operator
	float numOne; //first number
	float numTwo; //second number
	float ans; //third number

	cout << "Please enter the operation you want to choose" << endl;
	cout << "The operators that this calculator uses is Addition, Subtraction, Mutiplication, Divison, Power" << endl;
	cin >> operation; //gets there choice
	system("cls");
	cout << fixed << showpoint << setprecision(2);

	if (operation == "Addition") //displays and does addition
	{
		GatherNum(numOne, numTwo);

		ans = numOne + numTwo; //calculates answer
		cout << "The sum is " << ans << endl; //display answer

	}
	else if (operation == "Subtraction")
	{
		GatherNum(numOne, numTwo);

		ans = numOne - numTwo; //calculates answer
		cout << "The diffrence is " << ans << endl; //display answer
	}
	else if (operation == "Multiplication")
	{
		GatherNum(numOne, numTwo);

		ans = numOne * numTwo; //calculates answer
		cout << "The product is " << ans << endl; //display answer


	}
	else if (operation == "Divison")
	{
		GatherNum(numOne, numTwo); 

		system("cls");

		ans = numOne - numTwo; //calculates answer
		cout << "The quotient is " << ans << endl; //display answer


	}
	else if (operation == "Power")
	{
		GatherNum(numOne, numTwo);

		ans = pow(numOne, numTwo);
		cout << "The answer is " << ans << endl;
	}
	else
		cout << "Error no valid operator" << endl;




	return 0;
}


//----------------------------------------------------
void GatherNum(float& numOne, float& numTwo)
{
	/*
	purpose: it gathers the number for people
	pre: none
	post: the two numbers will be stored in varibles
	*/
	cout << "Please enter the first number" << endl;
	cin >> numOne; //gets the first number

	cout << "Please enter the second number" << endl;
	cin >> numTwo; //gets second numbers

	system("cls");

}//end of GatherNum