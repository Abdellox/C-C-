#include <stdio.h>
#include <stdlib.h>
/*
### 1. **SET_BIT**: Sets a specific bit in a register to 1.
### 2. **CLEAR_BIT**: Clears a specific bit in a register (sets it to 0).
### 3. **TOGGLE_BIT**: Flips a specific bit (from 0 to 1 or from 1 to 0).
### 4. **CHECK_BIT**: Checks whether a specific bit is set (1) or not (0).
### 5. **SHIFT LEFT (`<<`)**: Moves bits to the left, effectively multiplying by powers of 2.
### 6. **SHIFT RIGHT (`>>`)**: Moves bits to the right, effectively dividing by powers of 2.
*/
// Bit Manipulation Macros
#define SET_BIT(reg, bit)       ((reg) |= (1 << (bit)))     // Set a specific bit
#define CLEAR_BIT(reg, bit)     ((reg) &= ~(1 << (bit)))    // Clear a specific bit
#define TOGGLE_BIT(reg, bit)    ((reg) ^= (1 << (bit)))     // Toggle a specific bit
#define CHECK_BIT(reg, bit)     (((reg) & (1 << (bit))) != 0) // Check if a specific bit is set
int main()
{
unsigned char reg = 0b00000000;  // Initialize a register to 0(8-bit register,initially allbits 0)

    // Display initial register value
    printf("Initial register value: 0x%02X (Binary: %08b)\n", reg, reg);

    // Set bit 3
    SET_BIT(reg, 3);
    printf("After SET_BIT(reg, 3): 0x%02X (Binary: %08b)\n", reg, reg);

    // Clear bit 3
    CLEAR_BIT(reg, 3);
    printf("After CLEAR_BIT(reg, 3): 0x%02X (Binary: %08b)\n", reg, reg);

    // Toggle bit 2
    TOGGLE_BIT(reg, 2);
    printf("After TOGGLE_BIT(reg, 2): 0x%02X (Binary: %08b)\n", reg, reg);

    // Check if bit 2 is set
    if (CHECK_BIT(reg, 2)) {
        printf("Bit 2 is SET.\n");
    } else {
        printf("Bit 2 is CLEARED.\n");
    }

    // Shift left operation (multiply by 2)
    reg = 0b00000001;  // Reset reg to 00000001 for shifting examples
    printf("Initial reg for shifting: 0x%02X (Binary: %08b)\n", reg, reg);

    // Shift left by 1 position
    reg <<= 1;  // reg = reg << 1
    printf("After shifting left by 1 (reg << 1): 0x%02X (Binary: %08b)\n", reg, reg);

    // Shift left by 2 positions
    reg <<= 2;  // reg = reg << 2
    printf("After shifting left by 2 (reg << 2): 0x%02X (Binary: %08b)\n", reg, reg);

    // Shift right operation (divide by 2)
    reg = 0b01000000;  // Reset reg to 01000000 for shifting examples
    printf("Initial reg for shifting right: 0x%02X (Binary: %08b)\n", reg, reg);

    // Shift right by 1 position
    reg >>= 1;  // reg = reg >> 1
    printf("After shifting right by 1 (reg >> 1): 0x%02X (Binary: %08b)\n", reg, reg);

    // Shift right by 2 positions
    reg >>= 2;  // reg = reg >> 2
    printf("After shifting right by 2 (reg >> 2): 0x%02X (Binary: %08b)\n", reg, reg);

    return 0;
}




/*
### Explanation of Each Step

1. **Initial Register Setup**
   - We initialize `reg` as `0b00000000`, meaning all bits are 0. This is the starting state of the register.

2. **Set a Bit (`SET_BIT`)**
   - `SET_BIT(reg, 3)` sets bit 3 of the register to `1`. The register becomes `0b00001000`.

3. **Clear a Bit (`CLEAR_BIT`)**
   - `CLEAR_BIT(reg, 3)` clears bit 3 of the register (sets it to `0`). After this operation, the register becomes `0b00000000`.

4. **Toggle a Bit (`TOGGLE_BIT`)**
   - `TOGGLE_BIT(reg, 2)` flips bit 2. If it was `0`, it becomes `1`; if it was `1`, it becomes `0`. After this operation, the register becomes `0b00000100`.

5. **Check if a Bit is Set (`CHECK_BIT`)**
   - `CHECK_BIT(reg, 2)` checks if bit 2 is `1`. If it is, it prints "Bit 2 is SET." If not, it prints "Bit 2 is CLEARED." In this case, bit 2 is set to `1`, so it prints "Bit 2 is SET."

6. **Shift Left (`<<`)**
   - **Shifting left** by 1 (`reg <<= 1`) effectively multiplies the value by 2.
   - Initially, `reg = 0b00000001`. After the shift, the register becomes `0b00000010`.
   - After shifting left by 2 (`reg <<= 2`), it becomes `0b00010000`, which is the result of multiplying by `2^3 = 8`.

7. **Shift Right (`>>`)**
   - **Shifting right** by 1 (`reg >>= 1`) effectively divides the value by 2.
   - Initially, `reg = 0b01000000`. After the shift, it becomes `0b00100000`.
   - After shifting right by 2 (`reg >>= 2`), it becomes `0b00001000`, which is the result of dividing by `2^3 = 8`.

### Expected Output

The output of the program should look like this:

```
Initial register value: 0x00 (Binary: 00000000)
After SET_BIT(reg, 3): 0x08 (Binary: 00001000)
After CLEAR_BIT(reg, 3): 0x00 (Binary: 00000000)
After TOGGLE_BIT(reg, 2): 0x04 (Binary: 00000100)
Bit 2 is SET.
Initial reg for shifting: 0x01 (Binary: 00000001)
After shifting left by 1 (reg << 1): 0x02 (Binary: 00000010)
After shifting left by 2 (reg << 2): 0x08 (Binary: 00001000)
Initial reg for shifting right: 0x40 (Binary: 01000000)
After shifting right by 1 (reg >> 1): 0x20 (Binary: 00100000)
After shifting right by 2 (reg >> 2): 0x08 (Binary: 00001000)
```

### Summary of Operations:
- **Set Bit**: Turns a specific bit to `1`.
- **Clear Bit**: Turns a specific bit to `0`.
- **Toggle Bit**: Flips the current state of a specific bit.
- **Check Bit**: Determines if a specific bit is `1` or `0`.
- **Shift Left (`<<`)**: Moves all bits to the left, multiplying by powers of 2.
- **Shift Right (`>>`)**: Moves all bits to the right, dividing by powers of 2.

I hope this helps clarify how each bit manipulation operation works, including bit shifts! Let me know if you need further explanation or modifications.


*/
