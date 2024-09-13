#include <iostream>

template<typename number_t, typename index_t> number_t get_fibbonachi_number(index_t required_number) {
    number_t first_last_number = 1, second_last_number = 1;
    for (index_t current_number_index = 2; current_number_index < required_number; current_number_index++) {
        number_t current_number = first_last_number + second_last_number;
        first_last_number = second_last_number, second_last_number = current_number;
    }
    return second_last_number;
}

int main(int argv, char **argc)
{
    std::cout << "Hello world!" << std::endl;

    unsigned long fibbonachi_numbers_amount = 10;
    if (argv >= 2) fibbonachi_numbers_amount = strtoul(argc[1], nullptr, 10);
    std::cout << "Here goes first " << fibbonachi_numbers_amount << " fibbonachi numbers: ";
    for (unsigned long n = 1; n <= fibbonachi_numbers_amount; n++) std::cout << get_fibbonachi_number<unsigned long long, unsigned short>(n) << ' ';
    std::cout << std::endl;

    return 0;
}