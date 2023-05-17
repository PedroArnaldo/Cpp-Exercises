#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("INFO");
    harl.complain("DEBUG");
    harl.complain("TEST");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}