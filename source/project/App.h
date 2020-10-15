
#ifndef __App_H
#define __App_H

#include<string>
#include<cstdint>
#include <list>
#include <iterator>
#include<iostream>


class App
{
public:
  std::string appName;
  int appRating;
  std::string appSize;
  double appReview;
  std::string appInstalls;
  std::string appContentRating;
  std::string appCategory;


  App();
  App(std::string,int,std::string,double,std::string,std::string,std::string);
   std::string getAppName();
   int getAppRating();
   std::string getAppSize();
   double getAppReviews();
   std::string getAppInstalls();
   std::string getContentRating();
   std::string getAppCategory();
   void display();
};

#endif





