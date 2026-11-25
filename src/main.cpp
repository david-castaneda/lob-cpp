
#include <iostream>
#include "lob/book.hpp"

int main()
{
    lob::Book book;

    book.addOrder(1, true, 10, 5, 0);

    std::cout << "here\n";
}