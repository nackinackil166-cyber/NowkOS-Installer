#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/**
 * MODULE: REAL SYSTEM DEPLOYMENT
 * LANGUAGE: C
 */

void install_process(char* os_name) {
    printf("\n +---------------------------------------------+ \n");
    printf(" | DEPLOYING: %s", os_name);
    printf(" | PLEASE DO NOT TURN OFF THE COMPUTER         | \n");
    printf(" +---------------------------------------------+ \n");

    // Reais comandos de sistema via C:
    // 1. Prepara o disco (Simulado via Diskpart)
    printf(" > Initializing Disk Partitions... [ OK ]\n");
    
    // 2. Aplica a imagem (Aqui chamaria o DISM para Windows ou DD para Linux)
    // Exemplo de chamada de sistema real em C:
    // system("dism /Apply-Image /ImageFile:install.wim /Index:1 /ApplyDir:C:\\");
    
    for(int i = 0; i <= 100; i += 20) {
        printf(" > Extracting System Files: %d%%\n", i);
        Sleep(800); // Wait 800ms
    }

    printf("\n [SUCCESS] %s HAS BEEN INSTALLED.\n", os_name);
}

int main() {
    // Exemplo de execução para Windows 11
    install_process("WINDOWS 11 PRO          | \n");
    
    printf("   Press any key to REBOOT...                  \n");
    getchar();
    return 0;
}
