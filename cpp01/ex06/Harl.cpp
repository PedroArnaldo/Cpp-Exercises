#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug(void) const
{
    std::cout << "[ DEBUG ]" << std::endl;  
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-
ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(void) const
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for
years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(void) const
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    std::map<std::string, int> map_fc;
    int selector = -1;

    map_fc["DEBUG"] = 0;
    map_fc["INFO"] = 1;
    map_fc["WARNING"] = 2;
    map_fc["ERROR"] = 3;

    if( map_fc.find(level) != map_fc.end())
            selector = map_fc[level];
    
    switch (selector){
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2: 
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
    }
}