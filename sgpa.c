#include <stdio.h>

int main() {
    float maths, physics, fede, bds, communication, it, dt, lsm, cad, ipr, aptitude, sgpa;
    int total_credits = 24;

    printf("Enter grade points for Mathematics (0-10): ");
    scanf("%f", &maths);
    printf("Enter grade points for Physics (0-10): ");
    scanf("%f", &physics);
    printf("Enter grade points for fede (0-10): ");
    scanf("%f", &fede);
    printf("Enter grade points for c++ (0-10): ");
    scanf("%f", &bds);
    printf("Enter grade points for Communication Skills (0-10): ");
    scanf("%f", &communication);
    printf("Enter grade points for EDT (0-10): ");
    scanf("%f", &it);
    printf("Enter grade points for it (0-10): ");
    scanf("%f", &dt);
    /*
    printf("Enter grade points for lsm (0-10): ");
    scanf("%f", &lsm);
    */
    printf("Enter grade points for cad (0-10): ");
    scanf("%f", &cad);
    printf("Enter grade points for ipr (0-10): ");
    scanf("%f", &ipr);
    printf("Enter grade points for aptitude (0-10): ");
    scanf("%f", &aptitude);

    if (maths < 0 || maths > 10 || physics < 0 || physics > 10 || fede < 0 || fede > 10 ||
        bds < 0 || bds > 10 || communication < 0 || communication > 10 ||
        it < 0 || it > 10 || dt < 0 || dt > 10 ||/* lsm < 0 || lsm > 10||*/ ipr < 0 || ipr > 10|| cad < 0 || cad > 10|| aptitude < 0 || aptitude > 10) {
        printf("Invalid input! Please enter grade points between 0 and 10.\n");
        return 1;
    }

    sgpa = (maths * 5 + physics * 3 + fede * 4 + bds * 4 + communication * 2 + aptitude * 2 + it + cad + /*lsm +*/ ipr + dt ) / total_credits;

    printf("SGPA = %.2f\n", sgpa);

    return 0;
}
