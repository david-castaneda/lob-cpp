#pragma once

#include "lob/limit.hpp"

namespace lob
{

    class Book
    {
    public:
        Book() = default;

        void addOrder(int orderId, bool buyOrSell, int shares, int limit, int timestamp);
        void cancelOrder(int orderId);
        int volumeAtLimit(int limit, bool buyOrSell);
        int bestBid();
        int bestOffer();

    private:
        Limit *buyTree;
        Limit *sellTree;
        Limit *lowestSell;
        Limit *highestBuy;
    };
};