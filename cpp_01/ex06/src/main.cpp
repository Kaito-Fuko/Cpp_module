#include "../include/Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <LOG_LEVEL>\n";
        return 1;
    }

    Harl harl;
    harl.filter(argv[1]);

    return 0;
}