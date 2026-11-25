#pragma once

#include "lob/limit.hpp"

namespace lob
{

    class Book
    {
    public:
        Book() = default;
        void addOrder(int id, bool buyOrSell, int shares, int limit, int timestamp);

    private:
        Limit *buyTree;
        Limit *sellTree;
        Limit *lowestSell;
        Limit *highestBuy;
    };
};