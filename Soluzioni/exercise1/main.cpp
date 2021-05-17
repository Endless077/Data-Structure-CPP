
#include "zlasdtest/test.hpp"
#include "zmytest/test.hpp"

#include "container/container.hpp"
#include "vector/vector.hpp"
#include "list/list.hpp"

//#ifndef uvar
//#define uint unsigned int
//#define ulong unsigned long
//#endif

/* ************************************************************************** */

#include <iostream>

/* ************************************************************************** */

int main() {

  do
    {
        std::cout << "Seleziona un opzione: " << std::endl;
        std::cout << "1. Esegui test Studente" << std::endl;
        std::cout << "2. Esegui test Professore" << std::endl;
        std::cout << "3. Chiudi programma" << std::endl;
        std::cout << ": ";
        int res = 0;

        std::cin >> res;

        if(res == 1)
        {
           test();
        }
        else if(res == 2)
        {
          lasdtest();
        }
        else
            if(res == 3)
            break;
    }
    while(true);

  return 0;

}