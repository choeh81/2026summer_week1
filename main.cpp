//dayOfyear: month, day
//student: id, score, grade

#include "student.h" //student.h에서 iostream include해서 여기선 안써도 됨

int main()
{
    using namespace ChoEunhye2372048;
    using namespace std;

    Student s1;
    s1.input();
    s1.print();

    Student s2;
    s2.setId(7654321);
    s2.setScore(85);
    s2.print();

    if(s1.getId() == s2.getId()
        && s1.getScore() == s2.getScore()
        && s1.getGrade() == s2.getGrade())
        cout << "s1 and s2 are equal.\n";
    else
        cout << "s1 and s2 are not equal. \n";

    return 0;
}