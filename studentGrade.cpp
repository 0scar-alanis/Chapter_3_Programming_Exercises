//Write a program that reads student name followed by five test scores.
//The program should output the student name, five tests scores, and the average test score.
//Output the average test score with two decimal values.

#include<iostream>
#include<string>
#include<iomanip>

int main() {

    //initialize variables
    std::string  firstName, lastName;
    double firstTest, secondTest, thirdTest, fourthTest, fifthTest;
    double average;

    //prompt user for student name
    std::cout << "Please enter student's name." << std::endl;
    std::cout << "First name: " << std::endl;
    std::cin >> firstName;
    std::cout << "Last name: " << std::endl;
    std::cin >> lastName;

    //prompt user for test sccores
    std::cout << "Enter exam 1st test score: " << std::endl;
    std::cin >> firstTest;
    std::cout << "Enter exam 2nd test score: " << std::endl;
    std::cin >> secondTest;
    std::cout << "Enter exam 3rd test score: " << std::endl;
    std::cin >> thirdTest;
    std::cout << "Enter exam 4th test score: " << std::endl;
    std::cin >> fourthTest;
    std::cout << "Enter exam 5th test score: " << std::endl;
    std::cin >> fifthTest;


    //round average score to 2 decimal values
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    //caculate the average after you input the tests
    //order of code executed matters
    average =(firstTest + secondTest + thirdTest + fourthTest + fifthTest) / 5;

    //output student name and average test score
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    std::cout << "The average test score is: " << average << std::endl;

    return 0;
}