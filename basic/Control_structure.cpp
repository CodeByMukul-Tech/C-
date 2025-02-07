#include <iostream>
using namespace std;

// if else statement

void Age(int ages)
{
    if (ages > 18)
    {
        cout << "your are eliable for vote and driving lisence" << endl;
    }
    else
    {
        cout << "sorry" << endl;
    }
}

void gender(string genders)
{
    if (genders == "male" || genders == "Male")
    {
        cout << "Hello sir ..." << endl;
    }
    else if (genders == "female" || genders == "Female")
    {
        cout << "Hello Mam ..." << endl;
    }
    else
    {
        cout << "sorry ! ";
    }
}
int main()
{

    string Gender;
    int age;
    cout << "Enter Your Gender -> ";
    cin >> Gender;
    // gender(Gender);
    gender(Gender);
    cout << "Enter Your Age : " << endl;
    cin >> age;
    Age(age);

    return 0;
}