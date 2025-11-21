#include <iostream>
#include <iomanip>

// Temperature Conversion Functions

double celsiusToFahrenheit()
{
    double celsius, fahrenheit;
    std::cout << "Temperature conversion selected." << std::endl;
    std::cout << "pls enter value in Celsius: ";
    std::cout << "" << std::endl;

    std::cin >> celsius;
    fahrenheit = (celsius * 9.0/5.0) + 32.0;
    return fahrenheit;
}

double FahrenheitToCelsius()
{   
    double fahrenheit, celsius;
    std::cout << "Temperature conversion selected." << std::endl;
    std::cout << "pls enter value in Fahrenheit: ";
    std::cout << "" << std::endl;

    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * 5.0/9.0;
    return celsius;
}

// Length Conversion Functions

double KmToMiles()
{
    double kilometers, miles;
    std::cout << "Length conversion selected." << std::endl;
    std::cout << "pls enter value in Kilometers: ";
    std::cout << "" << std::endl;

    std::cin >> kilometers;
    miles = kilometers * 0.621371;
    return miles;
}

double MilesToKm()
{
    double miles, kilometers;
    std::cout << "Length conversion selected." << std::endl;
    std::cout << "pls enter value in Miles: ";
    std::cout << "" << std::endl;

    std::cin >> miles;
    kilometers = miles / 0.621371;
    return kilometers;
}

// Mass Conversion Functions

double KgToPounds()
{
    double kilograms, pounds;
    std::cout << "Mass conversion selected." << std::endl;
    std::cout << "pls enter value in Kilograms: ";
    std::cout << "" << std::endl;

    std::cin >> kilograms;
    pounds = kilograms * 2.20462;
    return pounds;
}

double PoundsToKg()
{
    double pounds, kilograms;   
    std::cout << "Mass conversion selected." << std::endl;
    std::cout << "pls enter value in Pounds: ";
    std::cout << "" << std::endl;

    std::cin >> pounds;
    kilograms = pounds / 2.20462;
    return kilograms;
}

           


bool menu()
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

    int choice = 0, subChoice = 0;
    bool QUIT = false;
    std::cin >> choice;

    switch (choice)
        {
        case 1:
            std::cout << "\nTemperature :\n";
            std::cout << "1) Celsius -> Fahrenheit\n";
            std::cout << "2) Fahrenheit -> Celsius\n";
            std::cout << "Choix : \n";
            std::cout << "" << std::endl;
            std::cin >> subChoice;
            if (subChoice == 1)
            {
                double result = celsiusToFahrenheit();
                std::cout << std::fixed << std::setprecision(2) << result << std::endl;
            }
            else if (subChoice == 2)
            {
                double result = FahrenheitToCelsius();
                std::cout << std::fixed << std::setprecision(2) << result << std::endl;
            } 
            else 
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            break;
        case 2:
            std::cout << "\nLength :\n";
            std::cout << "1) Kilometers -> Miles\n";
            std::cout << "2) Miles -> Kilometers\n";
            std::cout << "Choix : \n";
            std::cout << "" << std::endl;
            std::cin >> subChoice;
            if (subChoice == 1)
            {
                double result = KmToMiles();
                std::cout << std::fixed << std::setprecision(4) << result << std::endl;
            }
            else if (subChoice == 2)
            {
                double result = MilesToKm();
                std::cout << std::fixed << std::setprecision(4) << result << std::endl;
            } 
            else 
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            break;
        case 3:
            std::cout << "\nMass :\n";
            std::cout << "1) Kilograms -> Pounds\n";
            std::cout << "2) Pounds -> Kilograms\n";
            std::cout << "Choix : \n";
            std::cout << "" << std::endl;
            std::cin >> subChoice;
            if (subChoice == 1)
            {
                double result = KgToPounds();
                std::cout << std::fixed << std::setprecision(2) << result << std::endl;
            }
            else if (subChoice == 2)
            {
                double result = PoundsToKg();
                std::cout << std::fixed << std::setprecision(2) << result << std::endl;
            } 
            else 
            {
                std::cout << "Invalid choice. Please try again." << std::endl;
            }
            break;
        case 4:
            QUIT = true;
            std::cout << "Exiting...   Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    return QUIT;
}

int main() 
{
    bool QUIT = false;
    while (!QUIT)
    {
        QUIT = menu();
        
    }
    return 0;
}