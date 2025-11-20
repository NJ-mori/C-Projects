#include <iostream>

// Temperature Conversion Functions

int celsiusToFahrenheit()
{
    std::cout << "Temperature conversion selected." << std::endl;
    std::cout << "" << std::endl;
    return 0;
}

int FahrenheitToCelsius()
{
    std::cout << "Temperature conversion selected." << std::endl;
    std::cout << "" << std::endl;
    return 0;
}

// Length Conversion Functions

int KmToMiles()
{
    std::cout << "Length conversion selected." << std::endl;
    std::cout << "" << std::endl;
    return 0;
}

int MilesToKm()
{
    std::cout << "Length conversion selected." << std::endl;
    std::cout << "" << std::endl;
    return 0;
}

// Mass Conversion Functions

int KgToPounds()
{
    std::cout << "Mass conversion selected." << std::endl;
    std::cout << "" << std::endl;
    return 0;
}

int PoundsToKg()
{
    std::cout << "Mass conversion selected." << std::endl;
    std::cout << "" << std::endl;
    return 0;
}

           


void menu()
{
    std::cout << "Welcome to the Unit Converter!" << std::endl;
    std::cout << "Please choose a conversion type:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1. Temperature" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "2. Length" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "3. Mass" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "4. Quit" << std::endl;
    std::cout << "" << std::endl;

    int choice, subChoice;
    std::cin >> choice;

    switch (choice)
        {
        case 1:
            cout << "\nTemperature :\n";
            cout << "1) Celsius -> Fahrenheit\n";
            cout << "2) Fahrenheit -> Celsius\n";
            cout << "Choix : \n";
            std::cout << "" << std::endl;
            std::cin >> subChoice;
            if (subChoice == 1)
            {
                celsiusToFahrenheit();
            }
            else if (subChoice == 2)
            {
                FahrenheitToCelsius();
            } 
            else 
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            break;
        case 2:
            cout << "\nLength :\n";
            cout << "1) Kilometers -> Miles\n";
            cout << "2) Miles -> Kilometers\n";
            cout << "Choix : \n";
            std::cout << "" << std::endl;
            std::cin >> subChoice;
            break;
            if (subChoice == 1)
            {
                KmToMiles();
            }
            else if (subChoice == 2)
            {
                MilesToKm();
            } 
            else 
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
        case 3:
            cout << "\nMass :\n";
            cout << "1) Kilograms -> Pounds\n";
            cout << "2) Pounds -> Kilograms\n";
            cout << "Choix : \n";
            std::cout << "" << std::endl;
            std::cin >> subChoice;
            break;
            if (subChoice == 1)
            {
                KgToPounds();
            }
            else if (subChoice == 2)
            {
                PoundsToKg();
            } 
            else 
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
        case 4:
            QUIT = true;
            std::cout << "Exiting...   Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
}

int main() 
{
    bool QUIT = false
    while (!QUIT)
    {
        menu();
        
    }
    return 0;
}