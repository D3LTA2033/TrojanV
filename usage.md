🚀 Quick Start – Trojan V (Educational Use Only)
⚠️ Warning: This tool is for educational purposes only. Do not run outside of an isolated virtual machine (VM). /inroot corporation is not responsible for any misuse or damage.

🔧 Requirements
A C compiler (e.g., gcc, clang, or MinGW on Windows)

A Linux, macOS, or Windows VM

Basic terminal/command prompt usage

📦 Building the Simulation
Clone the repository:

git clone https://github.com/d3lta2033/TrojanV.git
cd trojanv
Build the program using make:

make
If make isn't available, compile manually:
gcc -Wall -Iinclude src/*.c -o trojanv

🧪 Running the Trojan-V
In your terminal, run the executable:

./trojanv
Or on Windows:

cmd
TrojanV.exe
⚙️ What Happens
The program asks for user consent to run the simulation.

It attempts to detect if you're running in a VM (stub only — can be improved).

If confirmed, it runs:

A persistence (e.g., file creation)

A Command & Control (C2)

(Optional) A dangerous payload, disabled by default for safety

🔒 Important Notes
The dangerous payload in payloads.c is commented out by default. Uncomment only if you know what you're doing and are inside a VM.

To simulate VM detection, edit vm_detect.c and implement real checks (optional).

You can expand the project by adding new payloads or modules.

