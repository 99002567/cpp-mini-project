
#include<string>
#include<cstdint>

#include<iostream>
#include "App.h"
#include "Updates.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;
#include <list>
#include <iterator>

namespace {

class playstoredbtest : public ::testing::Test {

protected:
  void SetUp() 
  { 
  
  		std::list<string> res;
     		std::list<string> ::iterator iter;
     		std::string appName;
     		std::string appLastUpdated;
 		std::string androidVersion;
 		std::string appCurrentVersion;
		 std::string S, T;
 		 int appRating;
  		std::string appSize;
  		double appReview;
 		 std::string appInstalls;
  		std::string appContentRating;
 		 std::string appCategory;
    		fstream fin;
    		int count=1;
    		fin.open("googleplaystore.csv", ios::in);
    		while(getline(fin, S))
    		{
    			stringstream X(S);
    			while (getline(X, T,'\n'))
   			 {
   	 			res.push_back(T);
    			 }
   	        }
    		iter=res.begin();
   		 ++iter;
    		for(;iter!=res.end();++iter)
    		{
    			//std::cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			std::string substr; 
        			getline(ss, substr, ','); 
        			switch(count)
        			{
        				case 1:
        					appName=substr;
        					break;
        				case 2:
        					appCategory=substr;
        					break;
					case 3:
        					appRating=stoi(substr);
        					break;
					case 4:
        					appReview=stoi(substr);
        					break;
					case 5:
        					appSize=substr;
        					break;
					case 6:
        					appInstalls=substr;
        					break;
					case 7:
        					appContentRating=substr;
        					break;
					case 8:
        					appLastUpdated=substr;
        					break;
					case 9:
        					appCurrentVersion=substr;
        					break;
					case 10:
        					androidVersion=substr;
        				
        				c.addApp(appName,appRating,appSize,appReview,appInstalls,appContentRating,appCategory);
        						appName="";appCategory="";appRating=0;appReview=0.0;appSize="";appInstalls="";
						appContentRating="";
						break;
        			
        			}
        			++count;
        			
    			} 
  		}
    
  }
  void TearDown() {}
  Updates c;
};

TEST_F(playstoredbtest, DefaultConstructor1){
c.addApp("avacodo",1000,"2000",3000,"2800","6700","222");
//EXPECT_EQ(0,c.display());
}

}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    } // namespace

