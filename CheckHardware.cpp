#include <windows.h>
#include <iostream>

int main() {
    MEMORYSTATUSEX mem;
    mem.dwLength = sizeof(mem);
    GlobalMemoryStatusEx(&mem);
    float ramGB = (float)mem.ullTotalPhys / (1024 * 1024 * 1024);

    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);

    std::cout << " +---------------------------------------------------------+ " << std::endl;
    std::cout << " | NOWK OS - HARDWARE SCANNER v1.0                         | " << std::endl;
    std::cout << " +---------------------------------------------------------+ " << std::endl;
    std::cout << " |  > INSTALLED RAM: " << ramGB << " GB                          | " << std::endl;
    std::cout << " |  > CPU CORES: " << sysInfo.dwNumberOfProcessors << "                                | " << std::endl;
    std::cout << " |  STATUS: [" << (ramGB >= 4 ? "  COMPATIBLE  " : " INSUFFICIENT ") << "]      | " << std::endl;
    std::cout << " +---------------------------------------------------------+ " << std::endl;
    return 0;
}
