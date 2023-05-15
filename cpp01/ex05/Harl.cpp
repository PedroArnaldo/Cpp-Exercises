#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug(void) const
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-
ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for
years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::map<std::string, void (Harl::*)(void) const> map_fc;

    map_fc["debug"] = &Harl::debug;
    map_fc["info"] = &Harl::info;
    map_fc["warning"] = &Harl::warning;
    map_fc["error"] = &Harl::error;

    if( map_fc.find(level) != map_fc.end())
        (this->*map_fc[level])();
}