# Trojan V – Advanced Custom Trojan

**Trojan V** is a modular, open-source trojan simulation framework created by **/inroot corporation**. It is designed purely for **educational, ethical, and research purposes** — allowing cybersecurity students and professionals to safely study malware architecture, behavior, and simulation in a **virtualized environment**.

> ⚠️ **Warning:** This project is intended for **isolated Virtual Machines (VMs)** only. Never run this software on your main system. /inroot corporation is not responsible for any misuse or damage resulting from this software.

---

## Features

- ✅ User consent prompt before any payload executes  
- 🧩 Modular payload system (easy to extend)  
- 🛡️ Safe-by-default design (destructive code disabled)  
- 🧠 Simulated malware techniques:
  - Persistence
  - Command and Control (C2)
  - Dangerous payload (optional)
- 🧪 VM detection stub (for future enhancement)

---

## Directory Structure

trojanv/
├── include/ # Header files
│ ├── consent.h
│ ├── payloads.h
│ └── vm_detect.h
├── src/ # Source code
│ ├── main.c
│ ├── consent.c
│ ├── payloads.c
│ └── vm_detect.c
├── LICENSE # Custom license
├── Makefile # For easy build
└── README.md
---

## Quick Start

### Requirements

- GCC or compatible C compiler
- Make (optional but recommended)
- Virtual Machine (VMWare, VirtualBox, QEMU, etc.)

### Build

'''bash

git clone https://github.com/D3LTA2033/TrojanV.git
cd trojanv
make
Or compile manually:
gcc -Wall -Iinclude src/*.c -o trojanv

Run ./trojanv
Or on Windows:

cmd
trojanv.exe
How It Works
When executed, the program:

Asks for your permission to proceed

Checks for VM (basic stub — customizable)

Runs payloads:

 persistence
 C2 communication

Optional destructive behavior (commented out)

Warning
The payload_dangerous() function is disabled by default for safety.
Uncomment it only inside an isolated VM and at your own risk.

Do not run this software on live or production systems.

License
© 2025 /inroot corporation. All rights reserved.
This software is free to use for educational purposes **with credit** to /inroot corporation.
See LICENSE for full legal terms.
Contributing
Pull requests and forks are welcome — as long as your additions respect the project's ethical purpose.

Contact
For permission, inquiries, or questions:
📧 [YourContactEmail@example.com]
🌐 https://inrootcorporation.netlify.app/

Disclaimer
This software is provided "as is" without any warranty. Use at your own risk. /inroot corporation is not liable for any damage caused by running or modifying this project.

yaml
Kopiëren
Bewerken

---

Let me know if you want to add:

- Screenshots or terminal output  
- A “Live Demo” badge (for read-only simulation)  
- A contributor section or GitHub badges at the top  

I can also generate the `LICENSE` file in plain `.txt` if needed.
