/* In digital world colors are specified in RGB format, with values of R, G, and B varying on
integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB
color to CMYK as per formula:
- White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1. */

#include <stdio.h>
#include <math.h>

int main()
{
    int red, green, blue;
    float white, cyan, magenta, yellow, black;

    // Input RGB values
    printf("Enter Red value (0-255): ");
    scanf("%d", &red);
    printf("Enter Green value (0-255): ");
    scanf("%d", &green);
    printf("Enter Blue value (0-255): ");
    scanf("%d", &blue);

    // Check if RGB values are all zero
    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = magenta = yellow = 0.0;
        black = 1.0;
    }
    else
    {
        // Normalize the RGB values to a range of 0 to 1
        float r = red / 255.0;
        float g = green / 255.0;
        float b = blue / 255.0;

        // Calculate white
        white = fmax(r, fmax(g, b));

        // Calculate CMYK values
        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1.0 - white;
    }

    // Output CMYK values
    printf("CMYK values:\n");
    printf("Cyan: %.2f\n", cyan);
    printf("Magenta: %.2f\n", magenta);
    printf("Yellow: %.2f\n", yellow);
    printf("Black: %.2f\n", black);

    return 0;
}
