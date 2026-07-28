#include <iostream>
using namespace std;

int main() {
    float marks[5], total = 0, average;
    string subjects[5] = {"Math", "English", "Urdu", "Science", "Computer"};
    char grade;

    cout << "=== Student Marks System ===" << endl;

    for(int i = 0; i < 5; i++) {
        cout << subjects[i] << " ke marks enter karo: ";
        cin >> marks[i];
        total = total + marks[i];
    }

    average = total / 5;

    if(average >= 90) grade = 'A';
    else if(average >= 80) grade = 'B';
    else if(average >= 70) grade = 'C';
    else if(average >= 60) grade = 'D';
    else grade = 'F';

    cout << "\n------ Result ------" << endl;
    cout << "Total Marks: " << total << " / 500" << endl;
    cout << "Average: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    if(grade == 'F')
        cout << "Status: Fail" << endl;
    else
        cout << "Status: Pass" << endl;

    return 0;
}