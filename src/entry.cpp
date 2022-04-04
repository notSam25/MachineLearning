#include <string>
#include <iostream>
#include <random>
#include <cstring>
#include <stdlib.h>
#include <time.h>

int main()  {
    srand(time(0));

    char URL[256];
    memset(URL, 0, sizeof(URL));

    std::cout << "Input a URL of a CAT/DOG\n";
    std::cin >> URL;
    
    if((rand() % 10) + 1 <= 5)
        return 0;
    else
        return 1;
}