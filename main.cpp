#include <iostream>
using namespace std;

class Chip8 {
    public:
    
    unsigned short opcode;
    unsigned char memory[4096];
    unsigned char V[16];
    unsigned short I;
    unsigned short pc;

    unsigned char gfx[64 * 32];

    unsigned char delay_timer;
    unsigned char sound_timer;

    unsigned short stack[16];
    unsigned short sp;

    unsigned char key[16];
    
    void initialize() {
        pc = 0x200;   // Programs start at memory location 0x200
        opcode = 0;
        I = 0;
        sp = 0;

        // Clear display
        for (int i = 0; i < 64 * 32; i++) gfx[i] = 0;

        // Clear stack
        for (int i = 0; i < 16; i++) stack[i] = 0;

        // Clear registers
        for (int i = 0; i < 16; i++) V[i] = 0;

        // Clear memory
        for (int i = 0; i < 4096; i++) memory[i] = 0;

        // Clear keys
        for (int i = 0; i < 16; i++) key[i] = 0;

        // Reset timers
        delay_timer = 0;
        sound_timer = 0;

        cout << "Chip-8 initialized successfully!" << endl;
    }
};


int main(){
    Chip8 Mychip8;
    Mychip8.initialize();
    return 0;
}