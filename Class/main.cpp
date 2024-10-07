#include <iostream>
#include "./averageGrades.hpp"
#include "./compareStudents.hpp"
#include "./highestGrade.hpp"
#include "./lowestGrade.hpp"
#include "./studentsAboveAverage.hpp"

using namespace std;

string students[] = {"amy", "bob", "joe"};
int grades[] = {95,81,98};

int main(){
    cout << "average grades in the class: " << averageGrades(grades, 3) << endl;
    cout << "comparing amy to bob for higher grade: " << compareStudents("amy", "bob", students, grades, 3) << endl;
    cout << "highest grade is: " << highestGrade(grades, 3) << endl;
    cout << "lowest grade is: " << lowestGrade(grades, 3) << endl;
    studentsAboveAverage(students, grades, 3);
    return 0;
}