#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream> //need so we can use istringstream and ostringstream clases

int main()
{
  std::ifstream infile;
  infile.open("xyzfile.uind"); //open file

  std::string dipole_file;

  while(std::getline(infile, dipole_file))
  {
    std::istringstream iss(dipole_file);
    //read.ignore()
    int atom_number;
    char atom_name;
    float dipolex;
    float dipoley;
    float dipolez;

    iss >> atom_number >> atom_name >> dipolex >> dipoley >> dipolez;
    std::cout << "multipole  " << atom_name << "   " << "0.00000"
    << "\n" << "               " << dipolex << "   " << dipoley
    << "   " << dipolez << "\n" << "               "
    << "0.00000\n" << "               " << "0.00000   0.00000"
    << "\n" << "               "
    << "0.00000   0.00000   0.00000" << "\n";
    //<< enum;
  }
  infile.close(); //close dipole_file
  return 0;

}


// 6
//      1  H      0.013715   -0.000000    0.071243
//      2  H     -0.142519   -0.000000    0.190770
//      3  O     -0.070371    0.000000    0.056350
//      4  H      0.019378    0.040904    0.022258
//      5  H      0.019378   -0.040904    0.022258
//      6  O     -0.127223    0.000000    0.224707
