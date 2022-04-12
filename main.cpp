#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int main() {
  vector<string> guess {"_", "_", "_", "_", "_"};
  ifstream in;
  in.open("possible.txt");
  if(in.fail()){
    cout << "File didn't open"<<endl;
  }

  srand(time(0));
  int randomNumber = rand() % 2500;

  vector<string>  words;
  for (int i = 0; i < 2500; i++){
    string w;
    getline(in, w);
    words.push_back(w);
    if (in.fail()) break;
  }
  cout<<"Guess a 5-letter Word!"<<endl;
  cout << words[randomNumber];
}
