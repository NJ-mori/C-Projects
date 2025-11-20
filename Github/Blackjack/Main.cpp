#include <iostream>
#include <cstdlib>
#include <ctime>

int main() { 
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
    int randomCard = rand()%19 + 1;
    int playerScore = rand()%18 + 4;
    int dealerScore = rand()%18 + 4;
    char choice;

    std::cout << "Welcome to Blackjack!" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Your initial score is: " << playerScore << std::endl;
    std::cout << "Dealer's initial score is: " << dealerScore << std::endl;
    std::cout << "" << std::endl;

    while (true) {
        if (playerScore > 21) {
            std::cout << "You Bust, Dealer Wins !" << std::endl;
            std::cout << "" << std::endl;
            break;
        }
        if (playerScore == 21) {
            std::cout << "You win!" << std::endl;
            std::cout << "" << std::endl;
            break;
        }
        std::cout << "Do you want to hit or stand? (h/s): " << std::endl;
        std::cout << "" << std::endl;
        std::cin >> choice;
        if (choice == 'h') {
            randomCard = rand()%10 + 1;
            std::cout << "You chose to hit." << std::endl;
            std::cout << "You drew a card with a value of : " << randomCard << std::endl;
            playerScore += randomCard;
            std::cout << "Your new score is: " << playerScore << std::endl;
            std::cout << "" << std::endl;
        } else if (choice == 's') {
            std::cout << "You chose to stand." << std::endl;
            std::cout << "" << std::endl;
            while (dealerScore < playerScore) {
                randomCard = rand()%10 + 1;
                std::cout << "Dealer hits." << std::endl;
                std::cout << "The Dealer drew a card with a value of: " << randomCard << std::endl;
                dealerScore += randomCard;
                std::cout << "His new score is: " << dealerScore << std::endl;
                std::cout << "" << std::endl;
            }
            if (dealerScore > 21 || playerScore > dealerScore) {
                std::cout << "You win!" << std::endl;
                break;
            } else if (playerScore < dealerScore) {
                std::cout << "Dealer wins!" << std::endl;
                break;
            } else {
                std::cout << "It's a tie!" << std::endl;
                break;
            }
        } else {
            std::cout << "Invalid choice." << std::endl;
            break;
        }

    }

    return 0;
}