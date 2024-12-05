// You have three distinct integer numbers: `num1, num2, and num3. Write a C++ program to determine and display which number is the largest, the second largest, and the smallest among the three.
#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter a First number : ";
    cin>>n1;
    cout<<"Enter a Second number : ";
    cin>>n2;
    cout<<"Enter a Third number : ";
    cin>>n3;
    int f_largest,s_largest,small;
    //f_largest = FIRST Largest
    //s_largest = Second Largest
    //small = small number
    if(n1>n2 && n1>n3){
        f_largest = n1;
        if(n2>n3){
            s_largest = n2;
            small = n3;
        }
        else{
            s_largest = n3;
            small = n2;
        }
    }
    else if(n2>n1 && n2>n3){
        f_largest = n2;
        if(n1>n3){
            s_largest = n1;
            small = n3;
        }
        else{
            s_largest = n3;
            small = n1;
        }
    }
    else{
        f_largest = n3;
        if(n1>n2){
            s_largest = n1;
            small = n2;
        }
        else{
            s_largest = n2;
            small = n1;
        }
    }
    cout<<"Largest Number is : "<<f_largest<<", "<<"Second Largest is : "<<s_largest<<", "<<"Small no : "<<small<<endl;
    return 0;
}
