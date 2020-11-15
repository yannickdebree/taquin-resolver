#include <iostream>
#include <Taquin.h>

int main()
{
    Taquin taquin;
    taquin.showItSelf();
    taquin.mixItSelf();
    if (taquin.isResolvable())
    {
        std::cout << "Taquin is resolvable !";
    }
    else
    {
        std::cout << "Taquin is not resolvable...";
    }
    return 0;
}
