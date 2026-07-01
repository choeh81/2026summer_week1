// #ifndef DECLARATION_H
// #define DECLARATION_H

// #endif

#pragma once

namespace ChoEunhye2372048
{
    struct student
    {
        int id{};
        int score{};
        char grade{};
    };


    student inputStudent();
   // char getGrade(int score);
    void setGrage(student& s); // 19,20번째 줄 중 하나를 사용하면 됨. void를 사용하면 안에서 바꾼게 밖에서도 영향이 감

    void printStudent(const student& s);


    int intputInteger();
    int addIntegers(int, int);
}