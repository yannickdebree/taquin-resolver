#include <iostream>
#include <Taquin.h>

int main()
{
    Taquin taquin;
    taquin.showItSelf();
    taquin.mixItSelf();
    if(taquin.isResolvable())
    {
        std::cout << "Le taquin est résolvable !";
    }
    else
    {
        std::cout << "Le taquin n'est pas résolvable...";
    }
    return 0;
}
