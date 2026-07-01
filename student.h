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
        void print();
        void input();
        int getId();
        int getScore();
        char getGrade();
        void setId(int newId);
        void setScore(int newScore);
    };
}