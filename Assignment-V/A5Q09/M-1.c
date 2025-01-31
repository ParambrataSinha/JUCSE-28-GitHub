int decodeBCD(unsigned char bcd)
{
    // Extract the tens digit (upper nibble)
    int tens = (bcd >> 4) & 0x0F;

    // Extract the ones digit (lower nibble)
    int ones = bcd & 0x0F;

    // Validate BCD (digits must be between 0-9)
    if (tens > 9 || ones > 9)
    {
        printf("Error: Invalid BCD value!\n");
        return -1; // Indicate invalid input
    }

    return tens * 10 + ones;
}

int main()
{
    unsigned char bcdValue;

    // Input the BCD value
    printf("Enter an 8-bit BCD value (as an integer): ");
    scanf("%hhu", &bcdValue);

    // Decode and print the decimal equivalent
    int decimalValue = decodeBCD(bcdValue);
    printf("The decimal equivalent is: %d\n", decimalValue);

    return 0;
}
