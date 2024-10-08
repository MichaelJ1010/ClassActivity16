#include <iostream>
#include "./lowestGrade.hpp"

using namespace std;

namespace lowestGrade{
    int lowestGrade(int grades[], int numberOfStudents){
        int lowestGrade = grades[0];
        for(int i = 1; i < numberOfStudents; i++){
            if(lowestGrade > grades[i]){
                lowestGrade = grades[i];
            }
        }
        return lowestGrade;
    }
}