// objective of v2 is operating the quiz program using functions 
/*
questions would be system output
option numbers would be user input
functions
 - score function, i call it and it adds a point
 - in main(), calling question1(), question2() .. etc
using std::endl; when taking user input since it clears the buffer

*/

#include <iostream>

int correctans1{0};


void welcome(){
    std::cout << "HELLO, WELCOME TO THE QUIZ!"<< '\n';
    std::cout<<"Starting.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n";

}

int question1(){
     std::cout << "QUESTION 1 \nWhat is the capital of India?\n";
     std::cout << "1) Bengaluru \n2) Chennai \n3) Bombay \n4) New Delhi\n" ;
     int correctans1(4);
     return correctans1;
}





int main(){
    int score{0};
    
    welcome();
    std::cout << question1();
    int cans1{correctans1}; // mistake i made : didnt assign the correctans1 value to a variable in main
    int ans1{};
    std::cout << "Enter option number: ";
    std::cin >> ans1;
    
 
    if (cans1 == ans1){std::cout << "correct answer!, 1 point awarded!\n"; score++;'\n';}

    else{std::cout << "wrong answer!, no points awarded!\n";}

    std::cout << "Your final score is: " << score <<'\n';
}

