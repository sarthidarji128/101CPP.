#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));

    int totalStudents, totalQuestions;

    cout << "Enter the total number of students (N): ";
    cin >> totalStudents;
    cout << "Enter the total number of questions (Q): ";
    cin >> totalQuestions;

    int studentsPerGroup = 5;
    int numGroups = totalStudents / studentsPerGroup;
    int remainingStudents = totalStudents % studentsPerGroup;
    int remainingQuestions = totalQuestions % totalStudents;

    vector<int> students(totalStudents);
    vector<int> questions(totalQuestions);
    vector<vector<int> > groups(numGroups);

    for (int i = 0; i < totalStudents; ++i) {
        students[i] = i + 1;
    }

    srand(static_cast<unsigned int>(time(nullptr)));
    random_shuffle(students.begin(), students.end());

    for (int i = 0; i < totalQuestions; ++i) {
        questions[i] = i + 1;
    }

    cout << "\nGroup distribution:" << endl;

    for (int group = 0; group < numGroups; ++group) {
        cout << "Group " << group + 1 << ":" << endl;
        for (int i = 0; i < studentsPerGroup; ++i) {
            cout << "  Student " << students.back() << ": ";
            for (int j = 0; j < totalQuestions / totalStudents; ++j) {
                if (!questions.empty()) {
                    int randomIndex = rand() % questions.size();
                    cout << "Question " << questions[randomIndex] << " ";
                    questions.erase(questions.begin() + randomIndex);
                }
            }
            cout << endl;
            students.pop_back();
        }
        cout << endl;
    }

    cout << "Remaining Students:" << endl;
    for (int i = 0; i < remainingStudents; ++i) {
        cout << "  Student " << students.back() << ": ";
        for (int j = 0; j < (totalQuestions / totalStudents) + (i < remainingQuestions ? 1 : 0); ++j) {
            if (!questions.empty()) {
                int randomIndex = rand() % questions.size();
                cout << "Question " << questions[randomIndex] << " ";
                questions.erase(questions.begin() + randomIndex);
            }
        }
        cout << endl;
        students.pop_back();
    }

    return 0;

}