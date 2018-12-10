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
        void initTaquin();
        void showTaquin();

    protected:

    private:
};

#endif // TAQUIN_H
