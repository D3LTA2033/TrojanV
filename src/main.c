#include <stdio.h>
#include "payloads.h"
#include "vm_detect.h"
#include "consent.h"

int main(void) {
    printf("=== Trojan V Educational Simulation ===\n");

    if (!get_user_consent()) {
        printf("User declined to run payload. Exiting.\n");
        return 0;
    }

    if (!detect_vm()) {
        printf("[!] WARNING: VM not detected. It is recommended to run this in a VM environment only.\n");
        printf("Proceed with extreme caution.\n");
    } else {
        printf("[*] VM environment detected. Proceeding safely.\n");
    }

    // Run simulated payloads
    payload_persistence();
    payload_c2_simulation();

    // Dangerous payload disabled by default
    // Uncomment and run at your own risk inside VM only
    // payload_dangerous();

    printf("Simulation complete. Exiting.\n");
    return 0;
}
