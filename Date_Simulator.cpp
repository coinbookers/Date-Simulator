#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int randomMood() {
    return std::rand() % 3;
}

void showStatus(int love, int heart) {
    std::cout << "\n--- Relationship Status ---\n";
    std::cout << "Love Level: " << love << "\n";
    std::cout << "Heart Sync: " << heart << "\n";
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int love = 5;
    int heart = 5;
    int turns = 7;

    std::cout << "=== Starlight Date Simulator ===\n";

    for (int i = 1; i <= turns; i++) {
        std::cout << "\nDate " << i << "\n";
        std::cout << "Choose interaction:\n";
        std::cout << "(1) Compliment\n(2) Talk\n(3) Gift\n-> ";

        int choice;
        std::cin >> choice;

        int mood = randomMood();

        if (choice == 1) {
            std::cout << "You give a warm compliment.\n";
            love += 2;
            heart += mood;
        } else if (choice == 2) {
            std::cout << "You share a conversation.\n";
            love += 1;
            heart += 1;
        } else {
            std::cout << "You offer a small gift.\n";
            love += 3;
            heart -= 1;
        }

        if (mood == 0)
            std::cout << "The atmosphere feels calm.\n";
        else if (mood == 1)
            std::cout << "A shy smile appears.\n";
        else
            std:
