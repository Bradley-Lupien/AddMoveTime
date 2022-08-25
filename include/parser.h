#include <iostream>
#include <fstream>
#include <string>
#ifndef FILE_PARSER
#define FILE_PARSER

class Parser 
{
  public:
    Parser();
    ~Parser();

    void init();
    void run();

  private:
    void  createFile(std::string fileName);
    bool  checkFile();
    void  readFile();
    void  splitFile();
    void  getMoveTime();
    void  appendMoveTime();
};
#endif


