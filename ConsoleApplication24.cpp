
#include <iostream>

struct Student
{
    char name[20];
    char surname[20];
    int noshow_count;
    int show_count;
    float average_mark;
};

int main()
{
    int total_lessons_count = 10;
    Student student;

    std::cout << "Enter student's name: ";
    std::cin >> student.name;
    std::cout << "Enter student's surname: ";
    std::cin >> student.surname;
    std::cout << "Enter count of student's noshows: ";
    std::cin >> student.noshow_count;
    
    student.show_count = total_lessons_count - student.noshow_count;
    student.average_mark = (float)(student.show_count * 5 + student.noshow_count * 2) / total_lessons_count;

    std::cout << "Student " << student.name << " " << student.surname << " has an average mark " << student.average_mark << std::endl;
}
