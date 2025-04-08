#include "Serializer.hpp"



uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t a;
    a = reinterpret_cast<uintptr_t>(ptr);
    return a;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *c = NULL;
    c = reinterpret_cast<Data *>(raw);
    return c;

}