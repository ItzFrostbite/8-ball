#include <iostream>
#include <ctime>
#include <string>

int main() {
  std::string message;
  std::cout << "===================" << '\n';
  std::cout << "Enter Your Question" << '\n';
  std::cout << "===================" << '\n';
  std::getline(std::cin, message);
    srand(time(NULL));

    int answer = rand() % 20;

if (answer == 0) {
    std::cout << "===================\n";
    std::cout << "It is certain.\n";
    std::cout << "===================\n";
  }

  	else if (answer == 1) {
    std::cout << "===================\n";
    std::cout << "It is decidedly so.\n";
    std::cout << "===================\n";
  }

    else if (answer == 2) {
    std::cout << "===================\n";
    std::cout << "Without a doubt.\n";
    std::cout << "===================\n";
  }

    else if (answer == 3) {
    std::cout << "===================\n";
    std::cout << "Yes - definitely.\n";
    std::cout << "===================\n";
  }
    else if (answer == 4) {
    std::cout << "===================\n";
    std::cout << "You may rely on it.\n";
    std::cout << "===================\n";
  }
      else if (answer == 5) {
    std::cout << "===================\n";
    std::cout << "As I see it, yes.\n";
    std::cout << "===================\n";
  }
      else if (answer == 6) {
    std::cout << "===================\n";
    std::cout << "Most likely.\n";
    std::cout << "===================\n";
  }
      else if (answer == 7) {
    std::cout << "===================\n";
    std::cout << "Outlook good\n";
    std::cout << "===================\n";
  }
      else if (answer == 8) {
    std::cout << "===================\n";
    std::cout << "Yes.\n";
    std::cout << "===================\n";
  }
      else if (answer == 9) {
    std::cout << "===================\n";
    std::cout << "Signs point to yes.\n";
    std::cout << "===================\n";
  }
      else if (answer == 10) {
    std::cout << "===================\n";
    std::cout << "Reply hazy, try again.\n";
    std::cout << "===================\n";
  }
      else if (answer == 11) {
    std::cout << "===================\n";
    std::cout << "Ask again later.\n";
    std::cout << "===================\n";
  }
      else if (answer == 12) {
    std::cout << "===================\n";
    std::cout << "Better not tell you now.\n";
    std::cout << "===================\n";
  }
      else if (answer == 13) {
    std::cout << "===================\n";
    std::cout << "Cannot predict now.\n";
    std::cout << "===================\n";
  }
      else if (answer == 14) {
    std::cout << "===================\n";
    std::cout << "Concentrate and ask again.\n";
    std::cout << "===================\n";
  }
      else if (answer == 15) {
    std::cout << "===================\n";
    std::cout << "Don't count on it.\n";
    std::cout << "===================\n";
  }
      else if (answer == 16) {
    std::cout << "===================\n";
    std::cout << "My reply is no.\n";
    std::cout << "===================\n";
  }
      else if (answer == 17) {
    std::cout << "===================\n";
    std::cout << "Outlook not so good.\n";
    std::cout << "===================\n";
  }
    else {
    std::cout << "===================\n";
    std::cout << "Very doubtful.\n";
    std::cout << "===================\n";
  }
    std::string bye;
    std::cout << "Press anything to continue\n";
    std::getline(std::cin, bye);
}
