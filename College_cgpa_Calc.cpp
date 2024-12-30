#include <bits/stdc++.h>
using namespace std;

double CGPA_Calc( int credit[] , int grade[] , int n ){

    int Total_credits = 0; // snake case
    int sum = 0;

    for ( int i = 0; i < n; i++ ){
        int product = (credit[i] * grade[i]);
        sum += product;
        Total_credits += credit[i];
    }

    double cgpa = (double)(sum) / Total_credits;
    return cgpa;
}

int main(){
   
    int n;

    cout << "Enter total no. of subjects : " << endl;
    
    cin >> n;
    
    cout << "\n";
    cout << "\n";

    int credit [n];
    int grade [n];

    for (int i = 0; i < n; i++){
        
    cout << "Enter credit of subject " << i+1 << " : " << endl;
    cin >> credit[i];
    
    cout << "Your grade in subject " << i+1 << " : " << endl;
    cin >> grade[i];
    
    cout << "\n";
    }

    double cgpa = CGPA_Calc( credit , grade , n);
    
    cout << "CGPA : " << cgpa << endl;
    
    return 0;
}