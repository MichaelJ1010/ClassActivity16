#include <iostream>
#include "./highestGrade.hpp"

using namespace std;

namespace highestGrade{
    int highestGrade(int grades[], int numberOfStudents){
        int highestGrade = grades[0];
        for(int i = 1; i < numberOfStudents; i++){
            if(highestGrade < grades[i]){
                highestGrade = grades[i];
            }
        }
        return highestGrade;
    }
}