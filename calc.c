#include <stdio.h>  
#include <stdlib.h> 

#define RED     "\x1b[31m"

void multiply(float numbers[]){
    
}
void divide(float numbers[]){

}
void subtract(float numbers[]){

}
void add(float numbers[]){

}
float * getList(int argc, char **argv){
    static float numbers[25];
    int count=0;
    for (int i = 1; i < (argc+1); i++){
        numbers[count]=atof(argv[i]);
    }
    return numbers;
}
// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char **argv){
    printf(argv);

//    for(int i=1; i<argc;i++){
//        //checking switch because wacky ass chars
//        if(argv[1][0]=='-'){
//            switch (argv[1][1]){
//                case 'h':  //help message
//                    printf("\nUsage:\n\tcalc [operation] [numbers(up to 25)]\n\n\t-h:  This message\n\t-m:  Multiply\n\t-d:  Divide\n\t-s:  Subtract\n\t-a:  Addition\n\n");
//                    break;
//                case 'm':  //multiply
//                    multiply();
//                    break;
//                case 'd':  //Divide
//                    divide();
//                    break;
//                case 's':  //Subtract
//                    subtract();
//                    break;
//                case 'a':  //Add
//                    add();
//                    break;

    // printf("\n");
    float[100] list= * getList(argc, argv)); 
    for ()
    return 1;
}