#include <iostream>
int main()
{   
    int score{0};
    std::cout << "HELLO, WELCOME TO THE QUIZ!"<< '\n';

    std::cout<<"Starting.\n.\n.\n.\n.\n.\n-------------------------------------------------------------------\n";
    
    std::cout << "QUESTION 1 \nWhat is the capital of India?\n";
    std::cout << "1) Bengaluru \n2) Chennai \n3) Bombay \n4) New Delhi\n" ;
    int correctAns{4};
    int userAns{};
    std::cout << "Enter option number: ";
    std::cin >>userAns;
    if (userAns == correctAns){std::cout<< "correct! 1 point awarded!\n";
        score++;}
    
    else {std::cout <<"Wrong! O points awarded!\n";}

    std::cout<<"Your final score is: "<< score<< '\n';    


    return 0;
}
