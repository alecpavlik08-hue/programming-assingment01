#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2, str3;

    cout << "Welcome to Al's Questionnaire assignment!!" << endl;

    cout << "Please list your favorite Baseball team: ";
    getline(cin, str1);
    cout << endl;

    cout << "If you have a favorite, please list what conference they are in: ";
    cin >> str2;
    cout << endl;

    cout << "What year did you favorite team last win the world series (if at all): ";
    cin >> str3;
    cout << endl;

    cout << "Your favorite team is: " << str1 << endl;
    cout << "Your favorite team plays in the: " << str2 << endl;
    cout << "Your favorite team last won the world series back in: " << str3 << endl;


    return 0;
}
