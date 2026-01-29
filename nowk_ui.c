#include <stdio.h>
#include <stdlib.h>

/**
 * MODULE: VINTAGE UI DESIGNER
 * LANGUAGE: C
 */

void draw_header() {
    printf(" +---------------------------------------------------------+ \n");
    printf(" | NOWK OS - CORE INSTALLER v1.0 (PRO EDITION)             | \n");
    printf(" +---------------------------------------------------------+ \n");
}

int main() {
    int choice;
    
    system("cls"); // Clears the screen (Windows)
    draw_header();
    
    printf(" |                                                         | \n");
    printf(" |  SELECT OPERATING SYSTEM TO DEPLOY:                     | \n");
    printf(" |                                                         | \n");
    printf(" |  [1] Windows 11      [4] Ubuntu Linux                   | \n");
    printf(" |  [2] Windows 10      [5] Arch Linux                     | \n");
    printf(" |  [3] Windows 7       [6] OpenSUSE                       | \n");
    printf(" |                                                         | \n");
    printf(" +---------------------------------------------------------+ \n");
    printf("  ENTER CHOICE (1-6): ");
    
    scanf("%d", &choice);
    
    printf("\n [!] SYSTEM SELECTED: %d\n", choice);
    printf(" [!] CALLING INSTALLER KERNEL...\n");
    
    return 0;
}
