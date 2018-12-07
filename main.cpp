#include <fstream>
#include <iostream>
#include <string>

#include <LrcParser.h>

using namespace std;

int main(int argc, char *argv[]) 
{
  string file_path = "./sample.lrc";

  cout << "version[" << lrc::LRC_PARSER_VERSION << "]\n";

  if (argc == 2)
    file_path = argv[1];

  lrc::parser lrc_parser(file_path);
  
  if (lrc_parser.load()) {
    lrc::collection &lrc_collection = lrc_parser.get(); 

    cout << lrc_collection.to_json_string() << endl;
  } else {
    cerr << "Err: failed to load LRC file!\n";
  }

  return 0;
}
