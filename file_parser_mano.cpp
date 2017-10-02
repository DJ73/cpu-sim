#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int choice (string s)
{
  if (s == "LDA"){ return 2;}
  if (s == "ADD"){ return 2;}
  if (s == "STA"){ return 2;}
  if (s == "AND"){ return 2;}
  if (s == "BUN"){ return 2;}
  if (s == "BSA"){ return 2;}
  if (s == "ISZ"){ return 2;}
  if (s == "CLA"){ return 1;}
  if (s == "CMA"){ return 1;}
  if (s == "INC"){ return 1;}
  if (s == "CLE"){ return 1;}
  if (s == "CME"){ return 1;}
  if (s == "CIL"){ return 1;}
  if (s == "CIR"){ return 1;}
  if (s == "SPA"){ return 1;}
  if (s == "SNA"){ return 1;}
  if (s == "SZA"){ return 1;}
  if (s == "SZE"){ return 1;}
  if (s == "INP"){ return 1;}
  if (s == "OUT"){ return 1;}
  if (s == "SKO"){ return 1;}
  if (s == "SKI"){ return 1;}
  if (s == "HLT"){ return 1;}
  if (s == "END"){ return 0;}
  return -1;
}

int main () {
  string line;
  string fname, fpath;
  cout << "File : ";
  cin >> fname;
  fpath = "mano codes/" + fname + ".txt";
  cout << "Reading file " << fpath << endl << endl;
  ifstream myfile;
  myfile.open(fpath.c_str());
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      int ans = choice(line.substr(0,3));
      if (ans == 1)
      {
        cout << "Command " << line.substr(0,3) << " is executed" << endl;
      }
      else if (ans == 2)
      {
        cout << "Command " << line.substr(0,3) << " is executed with " << line.substr(4) << " as parameter" << endl;
      }
      else if (!ans)
      {
        break;
      }
    }
    cout << endl;
    myfile.close();
  }

  else cout << "Unable to open file" << endl;

  return 0;
}
