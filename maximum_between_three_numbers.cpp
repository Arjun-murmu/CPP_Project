//Write a program to find maximum between three numbers.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int input1 = 10;
	int input2 = 20;
	int input3 = 15;
	int large;
	if((input1>input2) && (input1>input3)){
		large = input1;
	}
	else if((input2>input1) && (input2>input3)){
		large = input2;
	}
	else{
		large = input3;
	}
	cout<<"Maximum among all three numbers is : "<<large;
	return 0;
}
