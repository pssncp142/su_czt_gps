#include "globals.hh"
#include "G4ThreeVector.hh"
 
class CGlobalParameters
{
  public:
    CGlobalParameters(void);
    ~CGlobalParameters(void);
    
    static int LoadParameters();
    static G4double GetUnit(char * unistr);
    static void print();
    static int RegisterEntry(const char * tag, double * varAddress, int bUnit, double unit, const char * unitstr);
    static int InitialEntries();
    
    static double detType;
    
    static double detsizeX;
    static double detsizeY;
    static double detsizeZ;
    
    static double detdeadZ;
    
    static double detintvX;
    static double detintvY;
    static double detintvZ;
    
    static double detmatrixX;
    static double detmatrixY;
    static double detmatrixZ;
    
    static double pixelSize;
    
    static double enableTextGeom;
    
    static double sourceEnergy;
    
    static double sourceposX;
    static double sourceposY;
    static double sourceposZ;
    
    static double numberOfEvent;
    static double energyRes;
    static double positionRes;
    
    static double bkEnergyLimit;

    static double distancetothedetector;
    static double alboxcoverdistance;
    
    static double outputImagingData;
    static double outputImagingDataBin;
    static double outputElectronCloud;
    static double outputInitParameters;
    static double outputInitParaBin;
     
    static double displayTrack;
    
    static double collimatorTestThickness;
    static double collimatorTestDiameter;
    static double collimatorTestHoleDiameter;

    static double enableCollimator;
    static double enableSourceHolder;
    static double sourceHolderIsCo57;
    static double enableAlBoxCover;

    static G4double initEnergy;
    static G4ThreeVector initpos;
    static G4ThreeVector initdir;
    
    static char * m_pEntryPointer[100];
    static double * m_pEntryVarAddress[100];
    static int m_bEntryUnit[100];
    static int m_nEntryNum;
    static char * m_pEntryUnitstr[100];
    static double m_fEntryUnit[100];

  //New output files
    static double pixenergy ;
    static double bineclouds ;
    static double txteclouds ;
    static double stepview ;
    static double pixnumber ;

};
