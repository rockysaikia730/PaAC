#ifndef PHYSICS_HH
#define PHYSICS_HH

#include "G4VModularPhysicsList.hh"
#include "G4EmStandardPhysics.hh"
#include "G4OpticalPhysics.hh"
//#include "G4QPhotoNuclearPhysics.hh"

class MyPhysicsList : public G4VModularPhysicsList
{
private:
    /* data */
public:
    MyPhysicsList(/* args */);
    ~MyPhysicsList();
};




#endif