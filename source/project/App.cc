
#include"App.h"
#include <iostream>
#include<string>
#include<cstdint>
#include <list>
#include <iterator>
#include<iostream>
#include "Updates.h"


App::App():appName(""),appRating(0),appSize(""),appReview(0.0),appInstalls(""),appContentRating(""),appCategory(""){}
  

App::App(std::string name,int rate,std::string size,double review,std::string installs,std::string contentRating,std::string category ):appName(name),appRating(rate),appSize(size),
appReview(review),
                                                                                       appInstalls(installs),
                                                                                       appContentRating(contentRating),
                                                                                        appCategory(category){}

std:: string App::getAppName()
{
    return appName;
}
int App:: getAppRating()
{
    return appRating;
}

std:: string App::getAppSize()
{
    return appSize;
}

double App:: getAppReviews()
{
    return appReview;
}

std:: string App::getAppInstalls()
{
    return appInstalls;
}

std:: string App::getContentRating()
{
    return appContentRating;
}

std:: string App::getAppCategory()
{
    return appCategory;
}
void App:: display()
{
    std:: cout << appName <<","<<appRating<<"," << appSize << ","<<appReview<< ","<< appInstalls <<","<<appContentRating<<","<<appCategory<<std::endl;
}

/*int main()
{
App a();
App a1("abshdb",2,"23",3.2,"3m","everyone","beauty");
a1.display();
return 0;
}*/
