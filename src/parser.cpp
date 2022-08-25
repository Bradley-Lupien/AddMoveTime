#include "../include/parser.h"
#include "../include/atp.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <string>
#define MAX_NAME_SIZE 40
Parser::Parser() {}

Parser::~Parser() {}

void Parser::init()
{ 
  char fileName[MAX_NAME_SIZE]; 
  std::cout << "Please enter the file name for the new PGN: ";
  std::cin.getline(fileName, MAX_NAME_SIZE - 1);
  std::string file(charATP(fileName)); 
  createFile(file);
  checkFile();
}


void Parser::createFile(std::string fileName)
{
  try
  {
    std::ofstream fileWrite(fileName + ".pgn");
    std::cout << "[+] New file created \r\n" << "[+] Preparing to read file"  << std::endl;
    fileWrite.close();
  }
  catch (const std::exception& e)
  {
    e.what();
  }
}

  bool Parser::checkFile()
  {
    char currentFile[MAX_NAME_SIZE];
   
    std::cout << "Please enter the name of the current PGN file without the file extension: ";
    std::cin.getline(currentFile, MAX_NAME_SIZE - 1);
    std::cout << "[+] Checking that PGN exists" << std::endl;
    std::ifstream fileCheck;
    std::string file(charATP(currentFile));
    file += ".pgn";
    fileCheck.open(file);

    if(fileCheck) 
    {
      std::cout << "[+] File detected" << std::endl;
      fileCheck.close();
      return true;
    }
    else
    {
      std::cout << "[-] Error: File not detected" << std::endl;
      fileCheck.close();
      return false;
    }
  }

void Parser::readFile()
{
  
}

void Parser::splitFile()
{

}

void Parser::getMoveTime()
{

}



