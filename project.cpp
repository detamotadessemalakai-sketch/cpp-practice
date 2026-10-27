#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char subjects[3][20] = {"M1", "M2", "M3"};
    char names[5][20];
    int marks[5][3];
    int total[5];
    double average[5]; 


    cout << "Enter name of the students:" << endl;
    

    for (int i = 0; i < 5; i++) {
    cout << "Student " << i + 1<<"'s:";
    cin.getline(names[i], 20);
    }

    for (int i = 0; i < 5; i++) {
    cout << "Enter " << names[i] <<"'s" " marks: " << endl;
    total[i] = 0;
    
    for (int j = 0; j < 3; j++) {
     cout << subjects[j] << " : ";
     cin >> marks[i][j];

            total[i] += marks[i][j];
        }

        average[i] = total[i] / 3.0;
    }

    

    
    cout << setw(10) << "Names";

    for (int i = 0; i < 3; i++) {
        
        cout << setw(10) << subjects[i];
    }

    cout << setw(10) << "Total";
    cout << setw(10) << "Average" << endl;

    for (int i = 0; i < 5; i++) {
        
        cout << setw(10) << names[i];

        for (int j = 0; j < 3; j++) {
            
            cout << setw(10) << marks[i][j];
        }

        
        cout << setw(10) << total[i];
        cout << setw(10) << average[i] << endl;
    }

    double top = average[0];

    for (int i = 0; i < 5; i++) {
        if (average[i] > top)
            top = average[i];
    }

    

    for (int i = 0; i < 5; i++) {
        if (top == average[i]) {
            
            cout << "Top student : " << names[i] << endl;
        }
    }

    

    return 0;
}