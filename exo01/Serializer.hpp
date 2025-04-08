

#pragma once

#include <iostream>
#include "stdint.h"

struct Data
{
    int a;
    char b;
};


class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer() {}

   


    


};

// 0x7Fb89a = 48648648648
