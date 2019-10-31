#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

void writeLines(string filename){
   ofstream fs;
   fs.open((filename).c_str());
   fs << "I watched the movie Star Wars I." << endl;
   fs << "I watched the movie Star Trek." << endl;
   fs.close();
}

int main(int argc, char* argv[]){
   if(argc != 2){
      cout << endl;
      cout << "Usage is writing_file <file path> <line to be written>";
      cout << endl;
      cout << "  e.g. writing_file ./sample.txt 'Hello'" << endl;
   }

   cout << endl;
   cout << "Starting the writing_file program." << endl;
   writeLines(argv[1]);
   cout << "Wrote two lines to: " << argv[1] << endl;
   cout << "Finished the writing_file program." << endl;
   cout << endl;
   return 0;
}
