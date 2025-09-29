#include<iostream>
#include "Processor.hpp"
using namespace std;





// Processor implementations
processor::processor() {}
processor::~processor() {}

// TextProcessor implementations
textprocessor::textprocessor() {}
void textprocessor::processortype() { std::cout << "Text"; }

// NumericProcessor implementations
numericprocessor::numericprocessor() {}
void numericprocessor::processortype() { std::cout << "Numeric"; }

// ImageProcessor implementations
imageprocessor::imageprocessor() {}
void imageprocessor::processortype() { std::cout << "Image"; }

// AudioProcessor implementations
audioprocessor::audioprocessor() {}
void audioprocessor::processortype() { std::cout << "Audio"; }