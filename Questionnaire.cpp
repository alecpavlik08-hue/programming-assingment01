#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string str1, str2, str3;
	int wins, losses, WLpercent;

	ofstream outputFile("report.txt");

    cout << "Welcome to Al's Questionnaire assignment!!" << endl;

    cout << "Please list your favorite Baseball team: ";
    getline(cin, str1);
	cout << endl; // here you are entering your favorite baseball team

    cout << "If you have a favorite, please list what conference they are in: ";
    cin >> str2;
	cout << endl; // here you are entering your favorite team's conference

    cout << "What year did you favorite team last win the world series (if at all): ";
    cin >> str3;
	cout << endl; // here you are entering what year your team last won the world series

	cout << "How many wins did your team have that year?: ";
	cin >> wins;
	cout << endl; // here you are entering your number of wins

	cout << "How many losses did your team have that year?: ";
	cin >> losses;
	cout << endl; // here you are entering your number of losses

	WLpercent = (wins * 100) / (wins + losses); // this is calculating the win/loss percentage

    cout << "Your favorite team is: " << str1 << endl;
    cout << "Your favorite team plays in the: " << str2 << endl;
    cout << "Your favorite team last won the world series back in: " << str3 << endl;
	cout << "That year they had a win percentage of: " << WLpercent << "%" << endl;

    outputFile << "Results" << endl;

	outputFile << setw(3) << "Team:" << setw(15) << str1 << endl;
	outputFile << setw(3) << "Conference:" << setw(15) << str2 << endl;
	outputFile << setw(3) << "Year Won:" << setw(15) << str3 << endl;
	outputFile << setw(3) << "Wins:" << setw(15) << wins << endl;
	outputFile << setw(3) << "Losses:" << setw(15) << losses << endl;
	outputFile << setw(3) << "Win Percentage:" << setw(11) << WLpercent << "%" << endl;

	outputFile.close();

	cout << "Data written out to Report.txt file" << endl;
	cout << "Thank you for completing Al's Questionnaire!" << endl;

    return 0;
}
