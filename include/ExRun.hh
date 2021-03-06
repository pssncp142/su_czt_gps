//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
// $Id: ExRun.hh,v 1.2 2006/06/29 17:45:06 gunter Exp $
// GEANT4 tag $Name: geant4-08-01-patch-01 $
// 
//---------------------------------------------------------------------
// (Purpose) 
//    Example implementation for multi-functional-detector and 
//   primitive scorer.
//    This ExRun class has collections which accumulate
//   a event information into a run information.
//
//---------------------------------------------------------------------

#ifndef ExRun_h
#define ExRun_h 1

#include "G4Run.hh"
#include "G4Event.hh"

#include <vector>
#include <fstream>
//
class ExRun : public G4Run {

public:
  // constructor and destructor.
  //  vector of multifunctionaldetector name has to given to constructor.
  ExRun(const std::vector<G4String> mfdName);
  virtual ~ExRun();

public:
  // virtual method from G4Run. 
  // The method is overriden in this class for scoring.
  virtual void RecordEvent(const G4Event*);

  G4long m_nCrossedEventNum;
  G4long m_nHittedEventNum;
  G4long m_nPeakEventNum;
  G4long m_nSEscapeEventNum;

  //G4long GetNumberOfEvents();

  time_t startT;
  time_t lastT;

private:
  
};

//

#endif
