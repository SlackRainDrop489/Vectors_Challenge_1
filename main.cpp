/*
Quinn Alvine
9/4/2025
This program will give you the day or month based on the number that you input
Vectors_Challenge_1
 */

#include <iostream>

const std::string daysOfTheWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; // This is the vector that holds the days of the week
const std::string months[] = { // This is the vector that holds the months
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",
    "December"
};

void DayofWeek() { // This function will give you the day of the week based on your input
    std::cout << "Input a day number (1-7): ";
    int dayNumber; // This is your input
    if (!(std::cin >> dayNumber)) { // This will make sure that what you input was a int
        std::cout << "Invalid input." << std::endl;
        std::cin.clear();
    } else {
        if (dayNumber < 1 || dayNumber > 7) { // This will make sure that your input is within the total number of days in the week
            std::cout << std::endl << "Invalid day." << std::endl;
        } else {
            std::cout << std::endl << "The day " << dayNumber << " is " << daysOfTheWeek[dayNumber - 1] << std::endl;
        }
    }
}

void Month() { // This will print out the month based on what you input
    std::cout << "Input a month number (1-12): ";
    int monthNumber; // This is your input
    if (!(std::cin >> monthNumber)) { // This will check to make sure that what you input is and int
        std::cout << "Invalid input." << std::endl;
        std::cin.clear();
    } else {
        if (monthNumber < 1 || monthNumber > 12) { // This will make sure that your input is within the total number of months in a year
            std::cout << std::endl << "Invalid month." << std::endl;
        } else {
            std::cout << std::endl << "The month " << monthNumber << " is " << months[monthNumber - 1] << std::endl;
        }
    }
}


void menuOption() { // This will display the menu
    std::cout << "---------------------------" << std::endl;
    std::cout << "1. Get Day Name by Number (1-7) " << std::endl;
    std::cout << "2. Get Month by Number (1-12) " << std::endl;
    std::cout << "3. Quit" << std::endl;
}

int main() {
    int choice; // This is your input
    do { // This is the do-while loop
        menuOption(); // This prints the menu
        if (!(std::cin >> choice)) { // This makes sure that you input a int
            std::cout << "Invalid input." << std::endl;
            std::cin.clear();
            std::cout << "---------------------------" << std::endl;
        } else {
            std::cout << "---------------------------" << std::endl;
            switch (choice) { // This will fire the respective function
                case 1:
                    DayofWeek();
                    break;
                case 2:
                    Month();
                    break;
                case 3:
                    std::cout << "Quit" << std::endl;
                    break;
                default: // This will output invalid choice if you did not input a number within the options
                    std::cout << "Invalid Choice" << std::endl;
                    break;
            }
        }
    } while (choice != 3); // This will run as long as choice does not equal 3
    return 0;
}
