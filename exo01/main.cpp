/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:40:37 by bloisel           #+#    #+#             */
/*   Updated: 2025/04/15 15:40:38 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    // Serializer a;
    // Serializer::(nom de ma methode)();
    
    Data b;

    std::cout << &b << std::endl;

    std::cout << Serializer::serialize(&b) << std::endl;
    
    uintptr_t a;

    a = Serializer::serialize(&b);

    std::cout << Serializer::deserialize(a) << std::endl;

    // Data *c == pointeur vers un objet de type DATA 
    // == c'est aussi une variable qui contient une adresse vers un obj de type data
    // deserialize() reccupre un nombre decimal (u-i) retourne en adresse ;


    // uintptr_t = type de variable pour stocker generalement une adresse memoire
    // hexa sous forme de nombre decimal
    // serialize() recupere l'addresse en hexa et la retourne en nb decimal
    
    // methode static = methode appellable sans instancier la classe
    // variable static = variable qui conserve sa valeur apres rappel
    // fonction static = fonction qui n'existe que dans un fichier .c/.cpp

}