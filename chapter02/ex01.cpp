#include <iostream>
using namespace std;

int main() {
    const int students = 5;

    int scores[students] = {
        100, 200, 300, 400, 500
    };

    int sum = 0;
    int i, average;

    for(i=0; i<students; i++) {
        sum += scores[i];
    }

    average = sum / students;
    cout << "성적 평균= " <<average << endl;

    return 0;
}
