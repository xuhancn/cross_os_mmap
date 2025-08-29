#ifdef _WIN32
#include <Windows.h>
#include <functional> // std::function
#else
#include <dlfcn.h>
#include <sys/mman.h>
#include <unistd.h>
#endif

#include <fcntl.h>
#include <optional>
#include <regex>
#include <stdexcept>
#include <unordered_map>
#include <utility>

// unsigned char g_big_array[2000000000] = {0};

unsigned char g_dummy_weight[16384] = {3};





int main()
{
    printf("!!! g_dummy_weight addr: %p.\n", g_dummy_weight);

    Dl_info dl_info;
    int ret = dladdr(__func__, &dl_info);
    printf("!!! dladdr ret: %d.\n", ret);
    if(ret)
    {
        printf("!!! dl_info dli_fname: %s.\n", dl_info.dli_fname);
        printf("!!! dl_info dli_fbase: %p.\n", dl_info.dli_fbase);
        printf("!!! dl_info dli_sname: %s.\n", dl_info.dli_sname);
        printf("!!! dl_info dli_saddr: %p.\n", dl_info.dli_saddr);
    }

    return 0;
}