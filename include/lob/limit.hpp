#pragma once

namespace lob
{

    struct Order;

    // representing a single limit price
    struct Limit
    {
        int limitPrice;
        int size;
        int totalVolume;
        Limit *parent;
        Limit *leftChild;
        Limit *rightChild;
        Order *headOrder;
        Order *tailOrder;
    };
}