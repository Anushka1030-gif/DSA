#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

class StudentManagement {
    vector<Student> students;

public:
    void addStudent() {
        Student s;
        cout << "Enter Roll No: ";
        cin >> s.rollNo;
        cin.ignore(); // to clear buffer
        cout << "Enter Name: ";
        getline(cin, s.name);
        cout << "Enter Marks: ";
        cin >> s.marks;
        students.push_back(s);
        cout << "✅ Student added successfully!\n";
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "No student records found!\n";
            return;
        }
        cout << "\n--- Student Records ---\n";
        for (auto &s : students) {
            cout << "Roll No: " << s.rollNo 
                 << ", Name: " << s.name 
                 << ", Marks: " << s.marks << endl;
        }
    }

    void searchStudent() {
        int roll;
        cout << "Enter Roll No to search: ";
        cin >> roll;
        for (auto &s : students) {
            if (s.rollNo == roll) {
                cout << "✅ Student Found!\n";
                cout << "Roll No: " << s.rollNo 
                     << ", Name: " << s.name 
                     << ", Marks: " << s.marks << endl;
                return;
            }
        }
        cout << "❌ Student not found!\n";
    }
};

int main() {
    StudentManagement sm;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: sm.addStudent(); break;
            case 2: sm.displayStudents(); break;
            case 3: sm.searchStudent(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
