
#include "ElasticFusionSetup.h"


void ElasticFusionSetup::loadCalibration(const std::string & filename)
{
    std::ifstream file(filename);
    std::string line;

    assert(!file.eof());

    double fx, fy, cx, cy;

    std::getline(file, line);

    int n = sscanf(line.c_str(), "%lg %lg %lg %lg", &fx, &fy, &cx, &cy);

    assert(n == 4 && "Ooops, your calibration file should contain a single line with fx fy cx cy!");

    Intrinsics::getInstance(fx, fy, cx, cy);
}