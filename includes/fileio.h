#ifndef Fileio_H_
#define Fileio_H_
#include <vector>
#include "constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);


int save(const std::string filename, std::vector<process> &myProcesses);
#endif /* Fileio_H_ */