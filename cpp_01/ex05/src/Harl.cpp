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