#include <stdio.h>
#include <stdlib.h>
#include "payloads.h"

void payload_persistence(void) {
    printf("[*] persistence mechanism...\n");
    // Example: Create a file or registry entry (commented out for safety)
    // On Windows: system("echo 'Persistence simulation' > C:\\persist.txt");
    // On Linux: system("touch /tmp/persistence_sim.txt");
}

void payload_c2_simulation(void) {
    printf("[*] encrypted C2 communication...\n");
    // Example: Connect to a server (not implemented)
}

void payload_dangerous(void) {
    printf("[!] WARNING: This payload CAN be destructive.\n");
    printf("[!] It is DISABLED by default for safety.\n");
    // Uncomment the code below AT YOUR OWN RISK ONLY in isolated VM:
    // U may run it without VM but /inroot Corporation will not be responsible for any issues,
    // You may edit this code and remove warnings at ur own Risk.
    /*
    printf("[!] Running destructive payload...\n");
#ifdef _WIN32
    system("del /F /Q C:\\important_file.txt");
#else
    system("rm -rf /tmp/important_file");
#endif
    */
}
