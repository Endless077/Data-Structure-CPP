#include "zmytest/test.hpp"
#include "zlasdtest/test.hpp"

#include "stack/vec/stackvec.hpp"
#include "stack/lst/stacklst.hpp"
#include "queue/lst/queuelst.hpp"
#include "queue/vec/queuevec.hpp"

/* ************************************************************************** */

#include <iostream>

/* ************************************************************************** */

int main() {

  do {
        std::cout << "Libreria 2 - Antonio Garofalo: " << std::endl;
        std::cout << "1. Esegui test Studente" << std::endl;
        std::cout << "2. Esegui test Professore" << std::endl;
        std::cout << "3. Chiudi programma" << std::endl;
        std::cout << ": ";
        int res = 0;

        std::cin >> res;

        if(res == 1)
          test();

        else if(res == 2)
          lasdtest();

        else if(res == 3)
          break;

    }while(true);

  return 0;

}