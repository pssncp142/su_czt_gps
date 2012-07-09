 
  #include <string.h>
  #include <fstream>
  #include <cstdlib>
 
  gROOT->Reset();
  gStyle->SetOptStat(kFALSE);
    
  ifstream InFile;
  char * ReadFile = new char [1000];
  char * RootFile = new char [1000];
  string a;
  string b;
  int Energy;
  int h=0;

  //cout << "Data file to read:\n";
  //cin >> ReadFile;
  ReadFile="imaging_output.txt";

  //cout << "Root file to create:\n";
  //cin >> RootFile; 
 
  InFile.open(ReadFile);
  
  //TFile *File = new TFile(RootFile,"RECREATE");

  TH1F *h1010 = new TH1F("H1010","Energy",100000, 0, 140);     
  // while(true){
   h=1;
   while (!InFile.eof())
    {
      
      InFile >> a;
      if((h-2)%8==0) {Energy=atof(a.c_str()); h1010->Fill(Energy);}
      h++;
     
    }
      
   //InFile.close();
  //File->Write();
  h1010->Draw();
  //}  
  
