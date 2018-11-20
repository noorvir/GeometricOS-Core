/*
 * 
 */
#include <ElasticFusion.h>

int main(int argc, char const *argv[])
{
    /*
     *  load rgb and depth images
     *  process images with elastic fusion 
     * 
     * 
     */
    
    
    Resolution::getInstance(640, 480);
    Intrinsics::getInstance(528, 528, 320, 240);
    
    pangolin::Params windowParams;
    windowParams.Set("SAMPLE_BUFFERS", 0);
    windowParams.Set("SAMPLES", 0);
    
    pangolin::CreateWindowAndBind("Main", 1280, 800, windowParams);

    for(int i = 0; i < 100; i++)
    {
        /* code */
    }
    
    return 0;
}
