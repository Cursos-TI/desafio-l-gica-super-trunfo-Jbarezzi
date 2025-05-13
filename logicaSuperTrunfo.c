#include <stdio.h>

float calculatePopulationDensity(unsigned int population, float area)
{
    return (float)population / area;
}

float calculatePIBPerCapita(float PIB, unsigned int population)
{
    return (PIB * 1000000000.0f) / (float)population;
}

float calculateSuperPower(unsigned int population, float area, int touristicPoints, float PIBPerCapita, float populationDensity)
{
    return (float)population + area + (float)touristicPoints + PIBPerCapita - populationDensity;
}

int calculateIntegerAttributeWinner(int firstCardAttribute, int secondCardAttribute)
{
    if (firstCardAttribute == secondCardAttribute)
    {
        return 3;
    }
    if (firstCardAttribute > secondCardAttribute)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int calculateFloatAttributeWinner(float firstCardAttribute, float secondCardAttribute)
{
    if (firstCardAttribute == secondCardAttribute)
    {
        return 3;
    }
    if (firstCardAttribute > secondCardAttribute)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int calculatePopulationDensityWinner(float firstCardPopulationDensity, float secondCardPopulationDensity)
{
    if (firstCardPopulationDensity == secondCardPopulationDensity)
    {
        return 3;
    }
    if (firstCardPopulationDensity < secondCardPopulationDensity)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    int userChoice;
    char firstCardState = 'A';
    char firstCardCode[3] = "A01";
    char firstCardCity[20] = "São Paulo";
    unsigned int firstCardPopulation = 12325000;
    float firstCardArea = 1521.11;
    float firstCardPIB = 699.28;
    int firstCardTouristicPoints = 50;
    float firstCardPopulationDensity;
    float firstCardPIBperCapita;
    float firstCardSuperPower;

    char secondCardState = 'B';
    char secondCardCode[3] = "B02";
    char secondCardCity[20] = "Rio de Janeiro";
    unsigned int secondCardPopulation = 6748000;
    float secondCardArea = 1200.25;
    float secondCardPIB = 300.50;
    int secondCardTouristicPoints = 30;
    float secondCardPopulationDensity;
    float secondCardPIBperCapita;
    float secondCardSuperPower;

    int populationWinner;
    int areaWinner;
    int PIBWinner;
    int touristicPointsWinner;
    int populationDensityWinner;
    int PIBPerCapitaWinner;
    int superPowerWinner;

    firstCardPopulationDensity = calculatePopulationDensity(firstCardPopulation, firstCardArea);
    firstCardPIBperCapita = calculatePIBPerCapita(firstCardPIB, firstCardPopulation);
    firstCardSuperPower = calculateSuperPower(firstCardPopulation, firstCardArea, firstCardTouristicPoints, firstCardPIBperCapita, firstCardPopulationDensity);

    secondCardPopulationDensity = calculatePopulationDensity(secondCardPopulation, secondCardArea);
    secondCardPIBperCapita = calculatePIBPerCapita(secondCardPIB, secondCardPopulation);
    secondCardSuperPower = calculateSuperPower(secondCardPopulation, secondCardArea, secondCardTouristicPoints, secondCardPIBperCapita, secondCardPopulationDensity);

    populationWinner = calculateIntegerAttributeWinner(firstCardPopulation, secondCardPopulation);
    areaWinner = calculateFloatAttributeWinner(firstCardArea, secondCardArea);
    PIBWinner = calculateFloatAttributeWinner(firstCardPIB, secondCardPIB);
    touristicPointsWinner = calculateIntegerAttributeWinner(firstCardTouristicPoints, secondCardTouristicPoints);
    populationDensityWinner = calculatePopulationDensityWinner(firstCardPopulationDensity, secondCardPopulationDensity);
    PIBPerCapitaWinner = calculateFloatAttributeWinner(firstCardPIBperCapita, secondCardPIBperCapita);
    superPowerWinner = calculateFloatAttributeWinner(firstCardSuperPower, secondCardSuperPower);

    printf("\nEscolha qual atributo deseja comparar:\n");
    printf("\n 1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Populacional\n 6. PIB pre Capita\n 7. Super Poder\n");
    scanf(" %i", &userChoice);

    printf("\n Carta 1 - São Paulo vs Carta 2 - Rio de Janeiro");
    printf("\n O atributo escolhido é");

    switch (userChoice)
    {
    case 1:
        printf(" População.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardPopulation, secondCardPopulation);
        printf("\n O resultado é ");
        if (populationWinner == 3)
            printf("Empate!");
        if (populationWinner == 1)
            printf("vitória da Carta 1.");
        if (populationWinner == 2)
            printf("vitória da Carta 2.");
        break;
    case 2:
        printf(" Área.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardArea, secondCardArea);
        printf("\n O resultado é ");
        if (areaWinner == 3)
            printf("Empate!");
        if (areaWinner == 1)
            printf("vitória da Carta 1.");
        if (areaWinner == 2)
            printf("vitória da Carta 2.");
        break;
    case 3:
        printf(" PIB.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardPIB, secondCardPIB);
        printf("\n O resultado é ");
        if (PIBWinner == 3)
            printf("Empate!");
        if (PIBWinner == 1)
            printf("vitória da Carta 1.");
        if (PIBWinner == 2)
            printf("vitória da Carta 2.");
        break;
    case 4:
        printf(" Pontos Turísticos.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardTouristicPoints, secondCardTouristicPoints);
        printf("\n O resultado é ");
        if (touristicPointsWinner == 3)
            printf("Empate!");
        if (touristicPointsWinner == 1)
            printf("vitória da Carta 1.");
        if (touristicPointsWinner == 2)
            printf("vitória da Carta 2.");
        break;
    case 5:
        printf(" Densidade Populacional.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardPopulationDensity, secondCardPopulationDensity);
        printf("\n O resultado é ");
        if (populationDensityWinner == 3)
            printf("Empate!");
        if (populationDensityWinner == 1)
            printf("vitória da Carta 1.");
        if (populationDensityWinner == 2)
            printf("vitória da Carta 2.");
        break;
    case 6:
        printf(" PIB per Capita.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardPIBperCapita, secondCardPIBperCapita);
        printf("\n O resultado é ");
        if (PIBPerCapitaWinner == 3)
            printf("Empate!");
        if (PIBPerCapitaWinner == 1)
            printf("vitória da Carta 1.");
        if (PIBPerCapitaWinner == 2)
            printf("vitória da Carta 2.");
        break;
    case 7:
        printf(" Super Poder.");
        printf("\n São Paulo: %u vs Rio de Janeiro: %u", firstCardSuperPower, secondCardSuperPower);
        printf("\n O resultado é ");
        if (superPowerWinner == 3)
            printf("Empate!");
        if (superPowerWinner == 1)
            printf("vitória da Carta 1.");
        if (superPowerWinner == 2)
            printf("vitória da Carta 2.");
        break;
    default:
        printf("\n Entrada do atributo inválida");
    }

    return 0;
}
