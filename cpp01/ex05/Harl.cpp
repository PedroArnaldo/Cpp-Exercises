#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void Harl::debug(void) const
{
    std::cout << "debug" << std::endl;
}

void Harl::info(void) const
{
    std::cout << "info" << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "warning" << std::endl;
}

void Harl::error(void) const
{
    std::cout << "error" << std::endl;
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