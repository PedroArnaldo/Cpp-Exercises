#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("info");
    harl.complain("debug");
    harl.complain("test");
    harl.complain("warning");
    harl.complain("error");
    return (0);
}