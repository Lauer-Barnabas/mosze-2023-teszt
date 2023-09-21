#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS nem létezik
    std::cout << '1-100 ertekek duplazasa' //sor végén hiányzó ; , karakter konstans csak egy karaktert tartalmaz, javasolt string használata
    for (int i = 0;) //hiányos ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hiányos kilépési feltétel
    {
        std::cout << "Ertek:" //nem ír ki értékeket a ciklus
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //inicializálatlan int
    for (int i = 0; i < N_ELEMENTS, i++) //N_ELEMENT után vessző van, javasolt ;
    {
        atlag += b[i] //sor végén hiányzó ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
