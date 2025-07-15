#include <iostream>
#include <string>

class Student {
private:
    std::string Name;
    std::string Fakultaet;
    int Alter;
    int Semester;
    std::string Pruefungsfach;
    double Note;
public:
    Student() {
        Name = "Max Mustermann";
        Fakultaet = "Informatik";
        Alter = 18;
        Semester = 1;
        Pruefungsfach = "Technische Informatik";
        Note = 1.0;
    }
    Student(std::string name, std::string fakultaet, int alter, int semester, std::string pruefungsfach, double note) {
        Name = name;
        Fakultaet = fakultaet;
        Alter = alter;
        Semester = semester;
        Pruefungsfach = pruefungsfach;
        Note = note;
    }

    ~Student() {

    }
    void SetAlter(int);
    void SetName(std::string);
    void operator<<(std::string);
    int GetAlter();
    std::string GetName();

};

void Student::SetAlter(int alter) {
    Alter = alter;
}

void Student::SetName(std::string name) {
    Name = name;
}

void Student::operator<<(std::string name) {
    Name = name;
}

int Student::GetAlter() {
    return Alter;
}

std::string Student::GetName() {
    return Name;
}

int main() {
    Student Student01;
    Student Student02;
    std::cout << "Vor Aufruf SetAlter() - Student01 Alter: " << Student01.GetAlter() << std::endl;
    Student01.SetAlter(42);
    std::cout << "Nach Aufruf SetAlter() - Student01 Alter: " << Student01.GetAlter() << std::endl;
    std::cout << "Aufruf GetAlter() fuer Student02: " << Student02.GetAlter() << std::endl;
    std::cout << "Vor Aufruf operator<< fuer Name Student01: " << Student01.GetName() << std::endl;
    Student01.operator<<("Angelo Merte");
    std::cout << "Nach Aufruf operator<< fuer Name Student01: " << Student01.GetName() << std::endl;
 }
