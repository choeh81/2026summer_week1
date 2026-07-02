#pragma once
#include <iostream>

namespace ChoEunhye2372048
{
    class Student
    {
    private:
        int id{};
        int score{};
        char grade{};
        void testId();
        void testScore();
        void calGrade();

    public:
        student(int i = 1234567, int s = 0 /*, char g = 'F'*/) //g없어도 되긴 함
        : id{i}, score{s}  /*, grade{g}*/  //grade 없어도 되긴 함. 자동으로 계산해주니까
        {
            testId();
            testScore();
            calGrade(); 
        }
        void print();
        void input();
        int getId();
        int getScore();
        char getGrade();
        void setId(int newId);
        void setScore(int newScore);
    };
}