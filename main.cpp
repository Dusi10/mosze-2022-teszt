#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // NELEMENTS helyet N_ELEMENTS hibás megnevezés miatt
    std::cout << "1-100 ertekek duplazasa" << std::endl; //'' helyett "" kell mivel ez egy string, illetve ; hiányzik a végére egy ;
    for (int i = 1; i <= N_ELEMENTS; i++) //for ciklus nem megfelelő
    {
        b[i] = i * 2;
        std::cout << "Ertek:" << b[i] << std::endl; //pontosvessző hiányzik
    }   
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag;
    for (int i = 1; i <= N_ELEMENTS; i++) // , helyett ; kell, illetve megengedjük az egyenlőséget
    {
        atlag += b[i]; // ; a végére
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
