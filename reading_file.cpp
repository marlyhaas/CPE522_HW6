#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void readLines(string filename){
   ifstream fs;
   fs.open((filename).c_str());
   string line;
   while(getline(fs, line)) cout << line << endl;
   fs.close();
}

int main(int argc, char* argv[]){
   if(argc != 2){
      cout << endl;
      cout << "Usage is reading_file and filename" << endl;
      cout << "  e.g. readLines(filename)" << endl;
   }

   cout << endl;
   cout << "Starting the reading_file program." << endl;
   string filename(argv[1]);
   cout << "The filepath entered is: " << filename << endl;
   cout << "Here are the contents of the file:" << endl;
   readLines(filename);
   cout << endl;
   cout << "Finished the reading_file program." << endl;
   cout << endl;
   return 0;
}
