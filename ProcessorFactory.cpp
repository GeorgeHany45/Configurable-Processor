#include "Processor.hpp"
#include "ProcessorFactory.hpp"
#include <iostream>

using namespace std;

processor* ProcessorFactory::createobjects(const string& processortype) {
    if (processortype == "Text") {
        return new textprocessor();
    }
    else if (processortype == "Numeric") {
        return new numericprocessor();
    }
    else if (processortype == "Image") {
        return new imageprocessor();
    }
    else if (processortype == "Audio") {
        return new audioprocessor();
    }
    else {
        cout << "Invalid processor type" << endl;
        return nullptr; // Return nullptr to indicate an invalid type
    }
}