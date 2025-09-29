#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class Configuration {
private:
   std::map<std::string, std::string> settings; 

public:
    Configuration(const std::string& filename); 
    std::string getSetting(const std::string& key) const; 
};

#endif 
