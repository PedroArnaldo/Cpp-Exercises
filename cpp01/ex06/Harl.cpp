#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;  
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
   
    std::string nameFn[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    
    for (int i = 0; i < (int) nameFn->length(); i++)
    {
        if(level == nameFn[i])
            index = i;
    }
    
    switch (index){
        case 0:
            (this->*functions[0])();
        case 1:
            (this->*functions[1])();
        case 2: 
            (this->*functions[2])();
        case 3:
            (this->*functions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
    }
}