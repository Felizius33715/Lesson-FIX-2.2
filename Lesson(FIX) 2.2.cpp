#include <iostream>

class Counter
{
private:
    int number = 765;
public:
    int show_num() { return number; }
    void addAnotherOne() { number++; }
    void notAnotherOne() { number--; }
};

int main()
{
    Counter count;
    std::cout << "You want to initial value?" << std::endl << "Yes or No?" << std::endl;
    std::string* answer = new std::string;
    std::cin >> *answer;
    if (*answer == "Yes" || *answer == "yes")
    {
        std::cout << count.show_num() << std::endl;
    }
    while (*answer != "x" && *answer != "X")
    {
        std::cout << "Enter ('+', '-', '=' or 'x'): ";
        std::cin >> *answer;
        if (*answer == "+") { count.addAnotherOne(); }
        else if(*answer == "-"){ count.notAnotherOne(); }
        else if (*answer == "=") { std::cout << count.show_num() << std::endl; }
    }
    std::cout << "Good bye!";
    delete answer;
return 0;
}