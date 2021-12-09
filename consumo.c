
int main()
{
    float quilometrosRodados1, litrosAbastecidos1, quilometrosRodados2, litrosAbastecidos2, quilometrosRodados3, litrosAbastecidos3, consumo1, consumo2, consumo3, consumoMedio;
    
    printf("\nInsira a quantidade de quilometros rodados com o primeiro abastecimento: ");
    scanf("%f", &quilometrosRodados1);
    printf("Insira a quantidade de litros do primeiro abastecimento: ");
    scanf("%f", &litrosAbastecidos1);
    
    printf("\nInsira a quantidade de quilometros rodados com o segundo abastecimento: ");
    scanf("%f", &quilometrosRodados2);
    printf("Insira a quantidade de litros do segundo abastecimento: ");
    scanf("%f", &litrosAbastecidos2);
    
    printf("\nInsira a quantidade de quilometros rodados com o terceiro abastecimento: ");
    scanf("%f", &quilometrosRodados3);
    printf("Insira a quantidade de litros do terceiro abastecimento: ");
    scanf("%f", &litrosAbastecidos3);
    

    
    consumo1 = (quilometrosRodados1 / litrosAbastecidos1);
    consumo2 = (quilometrosRodados2 / litrosAbastecidos2);
    consumo3 = (quilometrosRodados3 / litrosAbastecidos3);
    
    printf("\nO consumo do primeiro abastecimento foi: %.2f", &consumo1);
    printf("\nO consumo do segundo abastecimento foi: %.2f", &consumo2);
    printf("\nO consumo do terceiro abastecimento foi: %.2f", &consumo3);
    printf("\nO consumo médio de todos os abastecimentos foi: %.2f", &consumoMedio);
    
    
    
    return 0;
}

