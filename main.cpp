#include <iostream>

const std::string daysOfTheWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const std::string months[] = {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",
    "December"
};

void DayofWeek() {
    std::cout << "Input a day number (1-7): ";
    int dayNumber;
    if (!(std::cin >> dayNumber)) {
        std::cout << "Invalid input." << std::endl;
        std::cin.clear();
    } else {
        if (dayNumber < 1 || dayNumber > 7) {
            std::cout << std::endl << "Invalid day." << std::endl;
        } else {
            std::cout << std::endl << "The day " << dayNumber << " is " << daysOfTheWeek[dayNumber - 1] << std::endl;
        }
    }
}

void Month() {
    std::cout << "Input a month number (1-12): ";
    int monthNumber;
    if (!(std::cin >> monthNumber)) {
        std::cout << "Invalid input." << std::endl;
        std::cin.clear();
    } else {
        if (monthNumber < 1 || monthNumber > 12) {
            std::cout << std::endl << "Invalid month." << std::endl;
        } else {
            std::cout << std::endl << "The month " << monthNumber << " is " << months[monthNumber - 1] << std::endl;
        }
    }
}


void menuOption() {
    std::cout << "---------------------------" << std::endl;
    std::cout << "1. Get Day Name by Number (1-7) " << std::endl;
    std::cout << "2. Get Month by Number (1-12) " << std::endl;
    std::cout << "3. Quit" << std::endl;
}

int main() {
    int choice;
    do {
        menuOption();
        if (!(std::cin >> choice)) {
            std::cout << "Invalid input." << std::endl;
            std::cin.clear();
            std::cout << "---------------------------" << std::endl;
        } else {
            std::cout << "---------------------------" << std::endl;
            switch (choice) {
                case 1:
                    DayofWeek();
                    break;
                case 2:
                    Month();
                    break;
                case 3:
                    std::cout << "Quit" << std::endl;
                    break;
                default:
                    std::cout << "Invalid Choice" << std::endl;
                    break;
            }
        }
    } while (choice != 3);
    return 0;
}
