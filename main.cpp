#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyet N_ELEMENTS hibás megnevezés miatt
    std::cout << '1-100 ertekek duplazasa' //'' helyett "" kell mivel ez egy string, illetve ; hiányzik a végére egy ;
    for (int i = 0;) //for ciklus nem megfelelő
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //pontosvessző hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ; kell
    {
        atlag += b[i] // ; a végére
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
