// objective of v2 is operating the quiz program using functions 
/*
questions would be system output
option numbers would be user input
functions
 - score function, i call it and it adds a point
 -final score function evaluates final score called at end of main()
 - in main(), calling question1(), question2() .. etc
using std::endl; when taking user input since it clears the buffer

*/

#include <iostream>

int correctans1{0};
int score{0};


void welcome(){
    std::cout << "HELLO, WELCOME TO THE QUIZ!"<< '\n';
    std::cout<<"Starting.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n";

}

int question1(){
    

    std::cout << "QUESTION 1 \nWhat is the capital of India?\n";
    std::cout << "1) Bengaluru \n2) Chennai \n3) Bombay \n4) New Delhi\n" ;
    int correctans1(4); // answerkey to the question
    std::cout << "Enter option number: ";
    int ans1{};
    std::cin >> ans1; 
    if (correctans1 == ans1){std::cout << "correct answer!, 1 point awarded!\n.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n"; score++;'\n';}
    else{std::cout << "wrong answer!, no points awarded!\n.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n";}

    return 0;

}

int question2(){
    std::cout << "What is the national animal of India?\n";

    std::cout << "1) Royal Bengal Tiger\n2) Lion\n3) Peacock\n4) Indian Jackal\n";

    int correctans2(1);
    std::cout << "Enter option number: ";
    int ans2{};

    std::cin >> ans2; // was thinking how to automate input part, or maybe a check() after we have both anskey and user answer.
    if(correctans2==ans2){
        std::cout << "correct answer!, 1 point awarded!\n.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n"; score++;'\n';}
    else{std::cout << "wrong answer!, no points awarded!\n.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n";}

    return 0;
}





int main(){
    
    
    welcome();
    question1();
    question2() ;  
    std::cout << "Your final score is: " << score <<'\n';
}

