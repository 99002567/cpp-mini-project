#ifndef __UPDATES_H
#define __UPDATES_H

#include<string>
#include<cstdint>
#include <list>
#include <iterator>
#include<iostream>
#include "App.h"

class Updates 
 {
 public:
 std::list <App> app;
 std::string appLastUpdated;
 std::string androidVersion;
 std::string appCurrentVersion;
   
  Updates();
  //Updates(std::string,std::string,std::string);
  
  void addApp(std::string,int,std::string,double,std::string,std::string,std::string);
  std:: string getappLastUpdated();
  std:: string getandroidVersion();
  std::string getAppCurrentVersion();
  void display();
  
  std::string getLowInstalls(std::string);
  std::string getHighInstalls(std::string);
  /*std::string getLowRating();
  
  std::string getHighRating();*/

};

#endif
