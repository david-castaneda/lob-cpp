#include "lob/book.hpp"

namespace lob
{

    void Book::addOrder(int orderId, bool buyOrSell, int shares, int limit, int timestamp)
    {
        // TODO
    }

    void Book::cancelOrder(int orderId)
    {
        // TODO
    }

    int Book::volumeAtLimit(int limit, bool buyOrSell)
    {
        // TODO
        return 0;
    }

    int Book::bestBid()
    {
        // TODO
        return 0;
    }

    int Book::bestOffer()
    {
        // TODO
        return 0;
    }
}