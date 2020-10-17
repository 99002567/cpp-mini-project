#include<string>
#include<cstdint>
#include <list>
#include <iterator>
#include<iostream>
//#include "App.h"
#include "Updates.h"



Updates::Updates():appLastUpdated(""),androidVersion(""),appCurrentVersion(""){}

//Updates::Updates(std::string lastUpdated,std::string version,std::string currentVersion):appLastUpdated(lastUpdated),androidVersion(version),appCurrentVersion(currentVersion){}



void Updates::addApp(std::string appName,int appRating,std::string appSize,double appReview,std::string appInstalls,std::string appContentRating,std::string appCategory){
app.push_back(App(appName,appRating,appSize,appReview,appInstalls,appContentRating,appCategory));
}


std:: string Updates::getappLastUpdated()
{
    return appLastUpdated;
}

std:: string Updates::getandroidVersion()
{
    return androidVersion;
}

std:: string Updates::getAppCurrentVersion()
{
   // return appCurrentVersion;
}

void Updates::display()
{
std::cout<<appLastUpdated<<","<<androidVersion<<","<<appCurrentVersion;
} 


