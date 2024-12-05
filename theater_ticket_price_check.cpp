/*You are developing a simple program for a movie theater in India. The theater has different ticket prices based on the age of the moviegoers. Here are the pricing rules in Indian Rupees (₹):

Children (age 12 and below) pay ₹100 per ticket.
Adults (age 13 to 64) pay ₹200 per ticket.
Seniors (age 65 and above) pay ₹150 per ticket.
Write a C++ program that takes the age of a moviegoer as input and calculates the ticket price they should pay in Indian Rupees (₹).
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"Welcome our movie theater."<<endl;
    int age;
    cout<<"Please enter your age : ";
    cin>>age;
    cout<<endl;
    cout<<"Here are the pricing rules in our threater : "<<endl;
    cout<<"1. Children (age 12 and below) pay ₹100 per ticket.\n 2. Adults (age 13 to 64) pay ₹200 per ticket.\n 3. Seniors (age 65 and above) pay ₹150 per ticket.\n"<<endl;
    double price;//ticketPrice
    if(age <= 12){
        price = 100.00;
        }
    else if(age <= 64){
        price = 200.00;
    }
    else{
        price = 150.00;
    }
    cout<<"Your Ticket Price is : "<<price<<endl;
    cout<<"Thank you.";
    return 0;
}
