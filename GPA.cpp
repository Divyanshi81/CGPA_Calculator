#include <bits/stdc++.h>
using namespace std;

double CGPA_Calc (double marks[] ,int n){

    double CGPA , sum = 0;

    for (int i = 0; i < n; i++){

        double grade = (marks [i] / 10);

        sum += grade ;
    }
    CGPA = sum / n;

    return CGPA;
}

int main(){
    int n;

    cout << "Enter total number of subjects : " << endl;

    cin >> n;

    double marks[n];

    cout << "Enter your marks of each subject : " << endl; 

    for ( int i = 0; i < n; i++){

    double cgpa = CGPA_Calc (marks , n);

    cout << "CGPA : cgpa" << endl;

    return 0;
}