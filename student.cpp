#include "student.h"

namespace ChoEunhye2372048
{
    void Student::testId(){
        //id는 7자리
        if(id<1000000 || id>9999999){
            std::cout << "Invalid ID. It should be a 7-digit number.\n";
            std::exit(1);//#include std::cstdlib
        }
    }
    void Student::testScore(){
        if(score<0 || score>100){
            std::cout << "Invalid score.\n";
            std::exit(1);
        }
    }
    void Student::calGrade(){
         switch(score/10)
        {
            case 10:
            case 9: grade='A'; break;
            case 8: grade='B'; break;
            case 7: grade='C'; break;
            case 6: grade='D'; break;
            default: grade='F';
        }
    }


    void Student::print(){
        std::cout << "ID: "  << id << std::endl;
        std::cout << "Score: " << score << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
    void Student::input(){
        std::cout << "Enter student ID: ";
        std::cin >> id;
        testId();
        std::cout << "Enter student score (0~100): ";
        std::cin >> score;
        testScore();
        calGrade();
    }
    int Student::getId(){
        return id; //접근함수, id가 int라서 얘도 int
    }
    int Student::getScore(){
        return score; //접근함수, score가 int라서 얘도 int
    }
    char Student::getGrade()
    {
        return grade; //접근함수, grade가 char라서 얘도 char
    }
    void Student::setId(int newId){
        id = newId;
        testId();
    }
    void Student::setScore(int newScore){
        score = newScore;
        testScore();
        calGrade();
    }
};