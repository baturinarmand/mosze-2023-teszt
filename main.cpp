#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];        //NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'      //sima '' helyett "", hianyzik a pontosvesszo 
    for (int i = 0;)            //csak a kezdoertek van megadva a ciklusban
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)         //ha 0-rol indul a ciklus nem fog belepni ezert N_ELEMENTS>i kell 
    {
        std::cout << "Ertek:"           //nincs megadva az ertek amit ki akarunk iratni, hianyzik a pontosvesszo
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                      //atlag nincs meghatarozva pl. int atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++)            //feltetelben vesszo helyett pontosvesszo kell
    {
        atlag += b[i]               //hianyzik a pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}