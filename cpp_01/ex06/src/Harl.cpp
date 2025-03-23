#include "../include/Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void    Harl::error()
{
    std::cout << "error" << std::endl;
}

void    Harl::warning()
{
    std::cout << "warning" << std::endl;
}

void    Harl::info()
{
    std::cout << "info" << std::endl;
}

void    Harl::debug()
{
    std::cout << "debug" << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*function[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            return (this->*function[i])();

    std::cerr << "error: " << level << " doesn't exists" << std::endl;
}

void Harl::filter( std::string level ) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int index = -1;

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            index = i;
            break;
        }
    }

    switch (index)
    {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}
