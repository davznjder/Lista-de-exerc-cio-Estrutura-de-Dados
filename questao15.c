#include <stdio.h>


int main() {

    float x, y;
    float mediaAri;

    for(int i=0; i<5; i++){
    printf("Digite as notas dos alunos:");
    scanf("%f %f", &x, &y);

    mediaAri= (x+y)/2.0;

    printf("Media %d: %.2f\n", i + 1, mediaAri);
    }
      return 0;
}
