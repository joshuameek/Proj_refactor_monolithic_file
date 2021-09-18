#ifndef Utils_H_
#define Utils_H_
#include <vector>
#include "constants.h"

    void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

    process getNext(std::vector<process> &myProcesses);

    int getSize(std::vector<process> &myProcesses);

    int handleMissingData(std::vector<process> &myProcesses);
#endif /* Utils_H_ */