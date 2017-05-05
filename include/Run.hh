//
// Created by student on 29.04.17.
//

#include <G4Run.hh>
#include <map>

#ifndef CPROJECT_RUN_HH
#define CPROJECT_RUN_HH

class Run : public G4Run
{
public:
    Run():result(G4int(0)){};
    ~Run(){};
    //void SetEnergyDeposit(G4double protonEn,G4double tritonEn);
    //std::map <G4double ,G4int> GetHist() const { return hist;};
    void SetNewEvent(){result++;}
    int GetResult () const {return result;}
private:
    //std::map <G4double ,G4int> hist;
    G4int result;

};




#endif //CPROJECT_RUN_HH