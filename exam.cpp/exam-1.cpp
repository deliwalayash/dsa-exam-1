#include <iostream>

using namespace std;

int main()
{

    int mark;
    char grade;

    cout << "Enter Your Percentage:";

    cin >> mark;

    if (mark > 90)
    {
        cout << "Your Grade is A." << endl;
        grade = 'a';
    }
    else if (mark > 80)
    {

        cout << "Your Grade is B." << endl;
        grade = 'b';
    }
    else if (mark > 70)
    {

        cout << "Your Grade is C." << endl;
        grade = 'c';
    }
    else if (mark > 60)
    {

        cout << "Your Grade is D." << endl;
        grade = 'd';
    }
    else if (mark > 50)
    {

        cout << "Your Grade is E." << endl;
        grade = 'e';
    }
    else
    {
        cout << "Your Grade is F." << endl;
        grade = 'f';
    }
    switch (grade)
    {
        case 'a':
        cout << "Excellent Work." << endl;
        break;
        case 'b':
        cout << "Well Done." << endl;
        break;
        case 'c':
        cout << "Good Job." << endl;
        break;
        case 'd':
        cout << "You are Passed." << endl;
        break;
        case 'e':
        cout << "You are Passed,But you can do Better." << endl;
        break;
        case 'f':
        cout << "You are failed." << endl;
        break;
    }

    if(grade =='a' || grade =='b' || grade == 'c' || grade=='d'){
        cout <<"Congratulations !You are eligible for next level.";
    }
       else{
        cout <<"Please Try Again Next Time.";

       }
    return 0;
}