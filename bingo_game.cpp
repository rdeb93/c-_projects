#include <iostream>
#include <random>

int main()
{
    // Define the number of tiles in the bingo card.
    const int grid_width = 9;
    const int grid_height = 3;

    // Define the characters used to draw the bingo card.
    const char horizontal = '-';
    const char vertical = '|';
    const char corner = '+';

    // Set the width of each tile in the bingo card
    const int tile_width = 3;

    // Draw the top border
    std::cout << corner;
    for (int j = 0; j < grid_width; j++)
    {
        for (int k = 0; k < tile_width; k++)
        {
            std::cout << horizontal;
        }
    }
    std::cout << corner;
    std::cout << std::endl;
}