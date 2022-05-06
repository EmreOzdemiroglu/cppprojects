#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "How many grades will you enter? \n";
    int GradeNumber;
    cin >> GradeNumber;
    cout << "Enter grades: \n";
    int grades[GradeNumber];
    string lettergrade[GradeNumber];
    int grade;
    for (int i=0; i<GradeNumber; i++) {
        cin >> grade;
        grades[i] = grade;
    }

    int Anum = 0, Bnum = 0, Cnum = 0, Dnum = 0, Fnum = 0; 

    for (int c = 0; c< GradeNumber; c++) { 
        if (grades[c]<60 && grades[c]>=0) {
            lettergrade[c]="F";
            Fnum+=1;
        } else if (grades[c]>=60 && grades[c]<70) {
            lettergrade[c]="D";
            Dnum+=1;
        }
        else if (grades[c]>=70 && grades[c]<80) {
            lettergrade[c]="C";
            Cnum+=1;
        }
        else if (grades[c]>=80 && grades[c]<90) {
            lettergrade[c]="B";
            Bnum+=1;
        }
        else if (grades[c]>=90 && grades[c]<=100) {
            lettergrade[c]="A";
            Anum+=1;
        } else {
            cout << "A problem occurred.";
        }
    }
    
    cout << "No\t" << "Grade\t" << "Letter Grade\n";
    for (int d = 0; d< GradeNumber; d++) {
        cout << d+1<< "\t" << grades[d] << "\t" << lettergrade[d] << "\n";
    }

    cout << "Histogram\n";
    cout << "========\n";
    cout << "A=   " << Anum <<"\n";
    cout << "B=   " << Bnum <<"\n";
    cout << "C=   " << Cnum <<"\n";
    cout << "D=   " << Dnum <<"\n";
    cout << "F=   " << Fnum <<"\n\n";


    return 0;
}
