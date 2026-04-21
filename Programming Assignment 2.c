/* * STUDENT NAME: SSENGENDO VICENT MPANGA
 * REG NUMBER:   24/U/BIE/11800/PE
 */

#include <stdio.h>

int getGradePoint(int mark) {
    if (mark >= 80) return 5;
    if (mark >= 70) return 4;
    if (mark >= 60) return 3;
    if (mark >= 50) return 2;
    return 0;
}

const char* getClassification(float cgpa) {
    if (cgpa >= 4.40) return "First Class";
    if (cgpa >= 3.60) return "Second Class Upper";
    if (cgpa >= 2.80) return "Second Class Lower";
    if (cgpa >= 2.00) return "Pass";
    return "Fail";
}

int main() {
    int marks1[8], marks2[8];
    int credits1[] = {4, 3, 3, 3, 3, 3, 3, 3};
    int credits2[] = {4, 3, 3, 3, 3, 3, 3, 3};
    float totalWGP1 = 0, totalWGP2 = 0;

    // Reading Semester 1 Marks (No text prompts for autograders)
    for(int i = 0; i < 8; i++) {
        if (scanf("%d", &marks1[i]) != 1) break;
        totalWGP1 += (float)getGradePoint(marks1[i]) * credits1[i];
    }

    // Reading Semester 2 Marks
    for(int i = 0; i < 8; i++) {
        if (scanf("%d", &marks2[i]) != 1) break;
        totalWGP2 += (float)getGradePoint(marks2[i]) * credits2[i];
    }

    float gpa1 = totalWGP1 / 25.0;
    float gpa2 = totalWGP2 / 25.0;
    float cgpa = (totalWGP1 + totalWGP2) / 50.0;

    // Strict Output Format (Remove or add lines based on your assignment's requirements)
    printf("GPA 1: %.2f\n", gpa1);
    printf("GPA 2: %.2f\n", gpa2);
    printf("CGPA: %.2f\n", cgpa);
    printf("Classification: %s\n", getClassification(cgpa));

    return 0;
}