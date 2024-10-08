#include <iostream>
#include "./compareStudents.hpp"

using namespace std;

namespace compareStudents{
    string compareStudents(string student1, string student2, string students[],int grades[], int numberOfStudents){
        int student1Index;
        int student2Index;
        for(int i = 0; i < numberOfStudents; i++){
            if(students[i] == student1){
                student1Index = i;
            }
            if(students[i] == student2){
                student2Index = i;
            }
        }
        if(grades[student1Index] > grades[student2Index]){
            return student1;
        }else if(grades[student1Index] < grades[student2Index]){
            return student2;
        }else{
            return "Students are the same";
        }
    }
}