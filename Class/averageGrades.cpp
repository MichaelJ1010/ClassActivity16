#include <iostream>
#include "./averageGrades.hpp"
using namespace std;
namespace averageGrades{
    double averageGrades(int grades[], int numberOfStudents){
        double average = 0;
        for(int i = 0; i < numberOfStudents; i++){
            average += grades[i];
        }
        return average / numberOfStudents;
    }
}