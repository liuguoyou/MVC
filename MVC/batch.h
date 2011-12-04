#ifndef BATCH_H
#define BATCH_H

#include "common.h"
#include "image.h"
#include "patch.h"

class Batch {
public:
	void init(Patch p);
	void prepareFiles(std::string& srcLoad, 
					  std::string& dstLoad, 
					  std::string& resultSave);
	void run();

private:
	int srcCounter;
	int dstCounter;
	int saveCounter;
	std::string srcFileBase;
	std::string dstFileBase;
	std::string saveFileBase;

};

#endif