#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    std::cout << "Welcome to Rock Paper Scissors. Best of three will win.\n";

    int playerNum;
    int aiNum;
    int playerScore;
    int aiScore;
    int i = 0;
    while (i < 3) {

        // Creates variable [aiChoice] which will have a value of 1-3, corresponding to rock, paper, and scissors
        aiNum = rand() % 4;

        // Gets the player's number choice that corresponds to an option and stores it to [playerChoice]
        std::cout << "Please select 1 for rock, 2 for paper, or 3 for scissors: ";
        std::cin >> playerNum;
        std::cout << "\n";

        if (aiNum == 1 && playerNum == 2) {

             std::cout << "I pick rock, you pick paper. You win this round.\n";
             i += 1;
             playerScore += 1;

        } else if (aiNum == 2 && playerNum == 1) {

             std::cout << "I pick paper, you pick rock. I win this round.\n";
             i += 1;
             aiScore += 1;

        } else if (aiNum == 2 && playerNum == 3) {

             std::cout << "I pick paper, you pick scissors. You win this round.\n";
             i += 1;
             playerScore += 1;

        } else if (aiNum == 3 && playerNum == 2) {

             std::cout << "I pick scissors, you pick paper. I win this round.\n";
             i += 1;
             aiScore += 1;

        } else if (aiNum == 1 && playerNum == 3) {

             std::cout << "I pick rock, you pick scissors. I win this round.\n";
             i += 1;
             aiScore += 1;

        } else if (aiNum == 3 && playerNum == 1) {

             std::cout << "I pick scissors, you pick rock. You win this round.\n";
             i += 1;
             playerScore += 1;

        } else {
    
             std::cout << "Seems like we tied. Let's go again.\n";
    
        }

    }

    int exit;
    if (playerScore >= 2) {

        std::cout << "You win! Press 1 and enter to exit.\n";
        std::cin >> exit;

    } else if (aiScore >= 2) {

        std::cout << "You lose! Press 1 and enter to exit.\n";
        std::cin >> exit;

    }

}