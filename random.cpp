#include <iostream>

int main(){

  int number, predict, num_tries;

  srand(time(NULL));
  number = (rand() % 50) + 1;

  std::cout << " * Number Guessing Game * " << std::endl;

  do{
    std::cout << "Predict a number between (1-50): ";
    std::cin >> predict;
    num_tries++;

    if (predict > number){
      std::cout << "Too High Number!!" << std::endl;
    }
    else if (predict < number){
      std::cout << "Too Low Number!" << std::endl;
    }
    else{
      std::cout << "Correct Number of Tries: " << num_tries << std::endl;
    }

  }while(predict != number);

  std::cout << "--------------------- GAME OVER ---------------------" << std::endl;
  
  return 0;
}
