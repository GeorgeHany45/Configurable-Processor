#include <iostream>
#include "Configuration.hpp"
#include "ProcessorFactory.hpp"
using namespace std;
int main (){
Configuration config ( "config/settings.txt");

string ProcessorType = config.getSetting("Processor.Options.Type");

auto processor = ProcessorFactory :: createobjects(ProcessorType);

processor -> processortype();

}