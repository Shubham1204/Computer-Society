/*
  Program Description - This prgram finds the nth number in fibonacci sequence.
  Time Complexity: O(1)
  Solution Description:  Finding the nth term using the golden ratio 
    nth number of fibonacci is aproximately ~ 1/sqrt(5)*(1+sqrt(5)/2)^n
Function Name : nth_term_of_fibonacci(int) -- return type int
  
*/

#include <iostream>
#include <math.h>

using namespace std;

// function to calc. nth term of fibonacci
int nth_term_of_fibonacci (int n)
{
    if (n==1||n==2)     
    // avoiding first two term becoz they are 1,1
    {
        cout << "1 is the first two term of fibonacci sequence" << endl;
        exit(-1);
        
    }
    // calculating fibonacci using golden ratio
    double answer = round((1/sqrt(5))*pow(((sqrt(5)+1)/2),n));
    return answer;
}

int main() 
{
    unsigned int n=0;    
    cout << "N = ";                     //term to be calculated
    cin>>n;
    n = nth_term_of_fibonacci(n);       //calling function nth_term_of_fibonacci
    cout << "Output = " << n << endl;  

}
