#include <iostream>
#include "./studentsAboveAverage.hpp"
#include "./averageGrades.hpp"

using namespace std;

void studentsAboveAverage(string student[], int grades[], int numberOfStudents){
    double average = averageGrades(grades,numberOfStudents);
    cout << "here's the name and grade of each student who is above the average of " << average << endl;
    for(int i = 0; i < numberOfStudents; i++){
        if(grades[i] > average){
            cout << student[i] << ", " << grades[i] << endl;
        }
    }
}