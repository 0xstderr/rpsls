/*
C++ Program which emulates a game of "Rock, paper, scissors, lizard, spock"

Here are the rules :

##################################################
    Scissors cuts Paper.
    Paper covers Rock.
    Rock crushes Lizard.
    Lizard poisons Spock.
    Spock smashes Scissors.
    Scissors decapitate Lizard.
    Lizard eats Paper.
    Paper disproves Spock.
    Spock vaporizes Rock.
    (and as it always has) Rock crushes Scissors.
#################################################
*/


// libraries [stdlib.h is used for the rand() function]

#include <iostream>
#include <stdlib.h>

// main function

int main() {
  
  //reset the randomness issue of the rand() function

  srand (time(NULL));

  //computer could be 1, 2 3,4 or 5

  int computer = rand() % 5 + 1;

  //var storing the user's input

  int user = 0;

  //prompting the user to select either rock, paper, scissors, lizard or spock.

  std::cout << "1) ✊ Rock\n";
  std::cout << "2) ✋ Paper\n";
  std::cout << "3) ✌️ Scissors\n";
  std::cout << "4) 🦎 Lizard\n";
  std::cout << "5) 👨 Spock\n";

  std::cout << "Shoot ! : ";

  // storing the user input

  std::cin >> user;

  //switch conditional statement to print out the user's choice
  
  switch(user) {
    case 1:
        std::cout << "✊ You chose Rock !\n";
        break;
    case 2:
        std::cout << "✋ You chose Paper !\n";
        break;
    case 3:
        std::cout << "✌️ You chose Scissors !\n";
        break;
    case 4:
        std::cout << "🦎 You chose Lizard !\n";
        break;
    default:
        std::cout << "👨 You chose Spock !\n";
        user = 5;
        break;
  }

  //switch conditional statement to print out the computer's choice
  
  switch(computer) {
    case 1:
        std::cout << "✊ Computer chose Rock !\n";
        break;
    case 2:
        std::cout << "✋ Computer chose Paper !\n";
        break;
    case 3:
        std::cout << "✌️ Computer chose Scissors !\n";
        break;
    case 4:
        std::cout << "🦎 Computer chose Lizard !\n";
        break;
    default:
        std::cout << "👨 Computer chose Spock !\n";
        break;
  }

  // if the choices matches, it's a tie

  if (user == computer) {

    std::cout << "It's a tie !\n";
  }

  // ifs statements to match the logic of the game and to output the result

  if (user == 1) {

    if (computer == 2) {

        std::cout << "✊ 🆚 ✋ : You lose !\n";
    }

    if (computer == 3) {
        
        std::cout << "✊ 🆚 ✌️ : You win !\n";
    }

    if (computer == 4) {

        std::cout << "✊ 🆚 🦎 : You win !\n";
    }

    if (computer == 5) {

        std::cout << "✊ 🆚 👨 : You lose !\n";
    }
  }

  else if (user == 2) {

    if (computer == 1) {

        std::cout << "✋ 🆚 ✊ : You win !\n";
    }
    
    if (computer == 3) {

        std::cout << "✋ 🆚 ✌️ : You lose !\n";
    }

    if (computer == 4) {

        std::cout << "✋ 🆚 🦎 : You lose !\n";
    }

    if (computer == 5) {

        std::cout << "✋ 🆚 👨 : You win !\n";
    }
  }

  else if (user == 3) {

    if (computer == 1) {

        std::cout << "✌️ 🆚 ✊ : You lose !\n";
    }

    if (computer == 2) {

        std::cout << "✌️ 🆚 ✋ : You win !\n";
    }

    if (computer == 4) {

        std::cout << "✌️ 🆚 🦎 : You win !\n";
    }
    
    if (computer == 5) {

        std::cout << "✌️ 🆚 👨 : You lose !\n";
    }
  }

  else if (user == 4) {

    if (computer == 1) {

        std::cout << "🦎 🆚 ✊ : You lose !\n";
    }
    
    if (computer == 2) {

        std::cout << "🦎 🆚 ✋ : You win !\n";
    }

    if (computer == 3) {

        std::cout << "🦎 🆚 ✌️ : You lose !\n";
    }

    if (computer == 5) {

        std::cout << "🦎 🆚 👨 : You win !\n";
    }
  }

  else if (user == 5) {

    if (computer == 1) {

        std::cout << "👨 🆚 ✊ : You win !\n";
    }

    if (computer == 2) {

        std::cout << "👨 🆚 ✋ : You lose !\n";
    }

    if (computer == 3) {

        std::cout << "👨 🆚 ✌️ : You win !\n";
    }
    
    if (computer == 4) {

        std::cout << "👨 🆚 🦎 : You lose !\n";
    }
  }

}

// End of the program
