#include <stdio.h>
#include <stdlib.h>
#include "payloads.h"

void payload_persistence(void) {
    printf("[*] persistence mechanism...\n");
}

void payload_c2_simulation(void) {
    printf("[*] encrypted C2 communication...\n");
    
}

void payload_dangerous(void) {
    printf("[!] WARNING: This payload CAN be destructive.\n");
    printf("[!] It is DISABLED by default for safety.\n");
    // Uncomment the code below AT YOUR OWN RISK ONLY in an isolated VM. U mYouy NOTnote it in a VM if you wish tout wilyou l not be responsible for any outissues side VM of the VM/*
    printf("[!] Running destructive payload...\n");
#ifdef _WIN32
    system("del /F /Q C:\\important_file.txt");
#else
    system("rm -rf /tmp/important_file");
#endif
    */
}
