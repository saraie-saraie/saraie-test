#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    
    printf("Hello, World!\n");

    int a;
    scanf("%d", &a);
    int b = a * 2;
    printf("The value of b is: %d\n", b);
    
    if(a > 10) {
        printf("a is greater than 10\n");
    } else {
        printf("a is less than or equal to 10\n");
    }
    printf("git branch update-venue\n");
    printf("git checkout update-venue\n");
    printf("git push --set-upstream origin update-venue\n");
    printf("git diff\n");
    while(1){
        if(a>20)break;
            FILE *fp;  
            fp=fopen("testlog.txt","a");
            fprintf(fp,"a=%d\n",a);
            fclose(fp);
            a++;
    }

    for(int i=0;i<5;i++){
        printf("i=%d\n",i);
    }

    return 0;

}


