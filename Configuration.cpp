#include "Configuration.hpp"
#include <stdexcept>
#include <iostream>
#include <fstream>
using namespace std;

Configuration::Configuration(const string& filename) {
    ifstream file(filename);
    
    if (!file) {
        throw std::runtime_error("Error: Cannot open file " + filename);
    }

    try {
        string line;
        while (getline(file, line)) {
           
            cout << line << endl;

            size_t pos = line.find('=');
            if (pos != string::npos) {
               
                string key = line.substr(0, pos);
                string value = line.substr(pos + 1);

                settings[key] = value;
            }
        }
    } catch (const exception& e) {
        cerr << "File error exception: " << e.what() << endl;
    }

    file.close();
}

string Configuration::getSetting(const string& key) const {
    auto it = settings.find(key);
    return (it != settings.end()) ? it->second : "";
}
