/* if a multiple of 3, print fizz. If a multiple of 5, print Buzz. If both,
 * print fizzbuzz
 */
#include <stdio.h>

main (){
	int i;
	for (i = 1; i <= 100; i++){
		if ( (i % 3) == 0 ){
			if ( (i % 5) == 0){
				printf("FizzBuzz\n");
			} else {
				printf("Fizz\n");
			}
		 } else if ( (i % 5) == 0 ){
			printf("Buzz\n");
		} else {
			printf("%i\n", i);
		}
	}
}
