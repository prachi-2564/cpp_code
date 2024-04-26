#include <iostream>
using namespace std;
 int main() 
 {
    int terms, i, f_term, denominator, diff;
    float sum = 0.0;
    cout<<"Enter the number of terms in HP series\n";
    cin>>terms;
 
    cout<<"Enter denominator of first term and common difference of HP series\n";
    cin>>f_term>>diff;
 
    /* print the series and add all elements to sum */
    denominator = f_term;
    cout<<"HP SERIES\n";
    for(i = 0; i < terms; i++) {
        cout<<"1/ "<< denominator<<"  ";
        
        denominator += diff;
    }
 
   
 
    return 0;
}