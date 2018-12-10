#ifndef TAQUIN_H
#define TAQUIN_H
#include <vector>

using namespace std;

class Taquin
{
    int dimensions;
    vector<vector<int>> cases;
    public:
        Taquin();
        Taquin(int d);
        bool isResolvable();
        void initItSelf();
        void mixItSelf();
        void showItSelf();

    protected:

    private:
};

#endif // TAQUIN_H
