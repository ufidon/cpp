#include <iostream>

using namespace std;

int main()
{

    double hours, seconds;
    /*
    1) 13 weeks of studying.
    2) Two 1.25-hour lectures per week.
    3) Two 1-hour midterm exams.
    4) One 2-hour final exam.
    5) 2.5 hours of self-study per week.
    */
    hours = 13 * (2 * 1.25 + 2.5) + 2 * 1 + 1 * 2;
    seconds = hours * 60 * 60;

    cout << "First Name: Donald" << endl;
    cout << "Last Name: Trump" << endl;
    cout << "I am supposed to spend " << seconds << " seconds studying C++ Programming" << endl;
}
