//Write program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent
//weight in pounds.
//Output both the weights rounded to two decimal places.
//(Note that 1 kilogram = 2.2.)
//Format your output with two decimal values.

#include <iostream>
#include <iomanip>

int main() {
    //create variables needed
    double kilograms;
    double kilogramsPerPound = 2.2;

    //output is rounded to 2 decimal places
    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    //prompt user
    std::cout << "Please enter your weight in kilograms: " << std::endl;
    std::cin>>kilograms;

    //outputs wight in kilograms and pounds
    std::cout <<"Your weight in kilograms is: ** " << kilograms << " kg.**" << std::endl;
    std::cout << "Your weight in pounds is: ** " << (kilograms * kilogramsPerPound) << " lbs. **" << std::endl;

    return 0;
}
