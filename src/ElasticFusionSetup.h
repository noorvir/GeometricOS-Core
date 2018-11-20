
#include <ElasticFusion.h>
#ifndef ELASTICFUSIONSETUP_H_
#define ELASTICFUSIONSETUP_H_

class ElasticFusionSetup
{
    public:
        ElasticFusionSetup(int argc, char * argv[]);
    
    private:
        void loadCalibration(const std::string & filename);
};

#endif /* ELASTICFUSIONSETUP_H_ */