#include <iostream>
using namespace std;


class Weapons
{
public:
    void weaponsDescription()
    {
        cout << "\nWeapons are used for attack and defense." << endl;
    }
};


class HotWeapons : public Weapons
{
public:
    void hotWeaponsDescription()
    {
        cout << "\nHot weapons use gunpowder or explosions to cause damage." << endl;
    }
};


class Bombs : public HotWeapons
{
public:
    void bombsDescription()
    {
        cout << "\nBombs explode and destroy targets." << endl;
    }
};


class NuclearBombs : public Bombs
{
public:
    void nuclearBombsDescription()
    {
        cout << "\nNuclear bombs explode using nuclear fission and fusion, causing massive destruction." << endl;
    }
};

int main()
{
    NuclearBombs nb;

    nb.weaponsDescription();
    nb.hotWeaponsDescription();
    nb.bombsDescription();
    nb.nuclearBombsDescription();
    cout<<endl;

    return 0;
}