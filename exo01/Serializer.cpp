/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:40:39 by bloisel           #+#    #+#             */
/*   Updated: 2025/04/15 15:40:40 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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