//
// Created by student on 29.04.17.
//

#include "StepAction.hh"
#include <G4Step.hh>

//#include "debugf.hh"

//SteppingAction::SteppingAction(EventAct * event):EvAct(event)  { }

void StepAct::UserSteppingAction(const G4Step * step) {
    //G4String pname = step->GetTrack()->GetDefinition()->GetParticleName();
    G4String vname = step->GetTrack()->GetVolume()->GetLogicalVolume()->GetName();
    //G4Track *secTrack;
    //G4double energy{0};

    if (vname =="Log_Tubs")
        Act->SetFlag();
   /* if (pname == "neutron" && vname == "LogGasVol" && step->GetNumberOfSecondariesInCurrentStep()) {
        for (unsigned int i = 0; i < step->GetNumberOfSecondariesInCurrentStep(); i++) {
            secTrack = step->GetSecondary()->at(i);
            if(secTrack->GetDefinition()->GetParticleName()=="proton")
                EvAct->SetProtonSE(secTrack->GetKineticEnergy());
            else
                EvAct->SetTritonSE(secTrack->GetKineticEnergy());
            energy+=secTrack->GetKineticEnergy();
        }
    }
    G4String LastLayername = step->GetTrack()->GetVolume()->GetLogicalVolume()->GetName();
    if (step->GetTrack()->GetNextVolume()) {
        G4String Layername = step->GetTrack()->GetNextVolume()->GetLogicalVolume()->GetName();
        G4String VolMatName =  step->GetTrack()->GetNextVolume()->GetLogicalVolume()->GetMaterial()->GetName();
        if (LastLayername != Layername && (pname == "proton" || pname == "triton") && VolMatName == "WallMat") {
            if (pname == "proton")EvAct->SetProtonEE(step->GetTrack()->GetKineticEnergy());
            else EvAct->SetTritonEE(step->GetTrack()->GetKineticEnergy());
        }
    }*/
}