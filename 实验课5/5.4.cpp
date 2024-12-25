#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    int score;

    Student(int id, int score) : id(id), score(score) {}

    void display() {
        cout << "学号: " << id << ", 成绩: " << score << endl;
    }
};

void max(Student students[], int num) {
    int k = 0;

    for (int j = 1; j < num; j++) {
        if (students[j].score > students[k].score) {
            k = j;
        }
    }

    cout << "成绩最高者的学号为：" << students[k].id << endl;
}

int main() {
    Student students[5] = {
        Student(1, 40),
        Student(2, 50),
        Student(3, 60),
        Student(4, 70),
        Student(5, 80)
    };

    max(students, 5);

    return 0;
}
