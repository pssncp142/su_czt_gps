#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
  ifstream ifs;
  ifs.open("imaging_output.txt");
  string a;
  int h=1;
  int cntr = 1;
  while(!ifs.eof()){
    ifs >> a;
    if((h-2)%8==0){cntr ++;}
    h++;
  }
  ifs.close();
  ifstream ifs2;
  double energy[h-1];
  h=1;
  cntr=1;
  ifs2.open("imaging_output.txt");
  while(!ifs2.eof()){
    ifs2 >> a;
    if((h-2)%8==0) {energy[cntr]=atof(a.c_str()); cntr ++;}
    h++;
  }
  ifs.close();

  int interval =5;
  int max = 140;
  int num = max/interval;
  int * value = new int[num];
  int b;
  
  for(int x=0; x < num ; x++) value[x]=0;
  
  for(int x=0; x<cntr ; x++){
    b = energy[x]/interval;
    //cout << b << "  " << value [b] << "  " << energy [x] << endl ;
    value[b]++;
    //cout << b << "  " << value [b] << "  " << energy [x] << endl ;
  } 
  for(int x=0; x<num ; x++){
    cout /*<< x*interval */ <<  "|";
    for (int y=0; y<value[x] ; y++){
      if(y%10==0) cout << "*" ;//cout << x << "  " << value[x] << endl;}
    }
    cout << endl;
  }

  return 0;
}
