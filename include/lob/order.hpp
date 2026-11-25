#pragma once

namespace lob
{

    struct Limit;

    struct Order
    {
        int idNumber;
        bool buyOrSell;
        int shares;
        int limit;
        int entryTime;
        int eventTime;
        Order *nextOrder;
        Order *prevOrder;
        Limit *parentLimit;
    };
}