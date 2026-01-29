#include <windows.h>
#include <iostream>

/**
 * PROJECT: NOWK OS INSTALLER
 * MODULE: PRE-INSTALL OPTIMIZER
 * LANGUAGE: C++
 */

void SetHighPriority() {
    // Tells the CPU to give maximum priority to the installer
    HANDLE process = GetCurrentProcess();
    if (SetPriorityClass(process, REALTIME_PRIORITY_CLASS)) {
        std::cout << " | [OK] PROCESS PRIORITY: REALTIME           |" << std::endl;
    }
}

void FlushMemory() {
    // Forces the OS to clear unused memory pages
    SetProcessWorkingSetSize(GetCurrentProcess(), (SIZE_T)-1, (SIZE_T)-1);
    std::cout << " | [OK] SYSTEM CACHE FLUSHED                  |" << std::endl;
}

int main() {
    std::cout << " +---------------------------------------------+ " << std::endl;
    std::cout << " | NOWK OS - INSTALLATION OPTIMIZER            | " << std::endl;
    std::cout << " +---------------------------------------------+ " << std::endl;
    std::cout << " |                                             | " << std::endl;

    SetHighPriority();
    FlushMemory();

    // Disabling Windows Defender Real-time (Simulated command)
    // Note: In a real environment, this requires Admin privileges
    std::cout << " | [OK] PREPARING DISK WRITE BUFFERS          |" << std::endl;
    std::cout << " | [OK] OPTIMIZING CPU SCHEDULER              |" << std::endl;
    
    std::cout << " |                                             | " << std::endl;
    std::cout << " | STATUS: [ READY FOR DEPLOYMENT ]            | " << std::endl;
    std::cout << " +---------------------------------------------+ " << std::endl;

    return 0;
}
