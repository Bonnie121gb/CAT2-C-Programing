/*
    Name: Cheruiyot Boniface
    Reg No: CT100/G/20094/23
*/
#include <stdio.h>
int main() {
    FILE *file;
    int numbers[10];
    int i;
    int sum;
    float average;
    
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error creating file\n");
        printf("Try running from Desktop or Documents folder\n");
        return 1;
    }
    printf("File created successfully!\n");
    
    for (i = 0; i < 10; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }
    fclose(file);
    printf("\nNumbers saved to input.txt\n\n");
    
    sum = 0;
    for (i = 0; i < 10; i++) {
        sum = sum + numbers[i];
    }
    average = (float)sum / 10;
    
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error creating output file\n");
        return 1;
    }
    
    fprintf(file, "Sum: %d\n", sum);
    fprintf(file, "Average: %.2f\n", average);
    fclose(file);
    printf("Results saved to output.txt\n\n");
    
    printf("=== INPUT.TXT ===\n");
    file = fopen("input.txt", "r");
    if (file != NULL) {
        int num;
        while (fscanf(file, "%d", &num) == 1) {
            printf("%d\n", num);
        }
        fclose(file);
    }
    
    printf("\n=== OUTPUT.TXT ===\n");
    file = fopen("output.txt", "r");
    if (file != NULL) {
        char line[100];
        while (fgets(line, 100, file) != NULL) {
            printf("%s", line);
        }
        fclose(file);
    }
    
    return 0;
}
