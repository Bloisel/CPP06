/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:40:57 by bloisel           #+#    #+#             */
/*   Updated: 2025/04/18 12:14:50 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
			std::srand(std::time(0));
			int r = std::rand() % 3;
			if (r == 0)
				return new A;
			else if (r == 1)
				return new B;
			else 
				return new C;
}

// Objets heritent de Base , si p est pointeur valide et pointe reelement vers A,B,C donne moi un ptr A* sinon nullptr
// Base destructeur virtuel polymorphe donc cast fonctionne 

void identify(Base* p)
{
			if (A* a = dynamic_cast<A*>(p))
				std::cout << "objet type : A " << std::endl;
			else if (B* b = dynamic_cast<B*>(p))
				std::cout << "objet type : B " << std::endl;
			else if (C* c = dynamic_cast<C*>(p))
				std::cout << "objet type : C " << std::endl;
			else
				std::cout << "Bad cast for class " << std::endl;
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p); // Essayer de caster
        (void)a;  // On ignore cette variable
        std::cout << "conversion is ok for A" << std::endl;
        return;
    } catch (...) {}

    try {
        B& b = dynamic_cast<B&>(p); // Essayer de caster
        (void)b;  // On ignore cette variable
        std::cout << "conversion is ok for B" << std::endl;
        return;
    } catch (...) {}

    try {
        C& c = dynamic_cast<C&>(p); // Essayer de caster
        (void)c;  // On ignore cette variable
        std::cout << "conversion is ok for C" << std::endl;
        return;
    } catch (...) {
        std::cerr << "Bad cast for class" << std::endl;
    }
}

// pour coutourner -Werror -Wunused error de variable non utilise , resultat non utilise 
// pas coherent avec attentes c++ si dynamic cast echoue ou reussi 
// le resultat de l'expression doit etre utilisee 
//dynamic_cast<A&>(p); / B& b = dynamic_cast<B&>(p);






// if (A* a = dynamic_cast<A*>(p))
int main()
{
			for (int i = 0; i < 20; i++)	
			{
					Base *ptr = generate();
					std::cout << "Pointing to ";
					identify(ptr);
					std::cout << "Reference to ";
					identify(*ptr);
					delete (ptr);
					std::cout << "_________________________________________________" << std::endl;
			}
			std::cout << "_________________________________________________" << std::endl;
			return (0);				
};